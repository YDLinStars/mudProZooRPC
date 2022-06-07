# 1 项目技术

- 了解集群和分布式概念以及原理
- RPC远程过程调用原理以及实现
- Protobuf数据序列化和反序列化协议
- ZooKeeper分布式一致性协调服务应用以及编程
- muduo网络编程
- conf配置文件的督学
- 异步日志
- **CMake**搭建项目集成编译环境

# 2 项目的目录

bin 可执行文件

build: 项目编译文件

lib: 项目库文件

src: 源文件

test: 测试代码

example: 框架代码使用范例

CMakeList.txt 顶层的cmake文件

README.md

autobuild.sh 一键编译脚本

# 3 启动项目

## 环境说明

- `ubuntu16.04` 以上(建议使用`Ubuntu18`)。
- `gcc 5.4.0` (建议安装7.0以上的，默认支持c++11)
- `muduo`
- `protobuf 3.2.0`
- `cmake 3.5.1`

## 安装依赖库

#### 安装依赖库

- [protobuf](https://github.com/protocolbuffers/protobuf)
- [ZooKeeper](https://github.com/apache/zookeeper)
- [muduo](https://github.com/chenshuo/muduo)
- [cmake](https://github.com/Kitware/CMake)

## 编译

```
./autobuild.sh
```

![image-20220607235307260](https://ydlin.oss-cn-guangzhou.aliyuncs.com/blog-img/image-20220607235307260.png)

运行：

启动zookeeper配置中心

```
cd ./bin/

```



# 4 关键设计

#### 服务接口设计

protobuf文件编译后将生成一系列C++类型，从而实现便利的接口服务；

![](https://ydlin.oss-cn-guangzhou.aliyuncs.com/blog-img/service.svg)

protobuf中service标识将生成如下C++类型：

| C++类            | 描述                                                         |
| ---------------- | ------------------------------------------------------------ |
| Service          | 服务类，服务端使用，可获取各方法的请求类型、方法的返回类型等； |
| Service_Stub     | 服务类，客户端使用，可获取各方法的请求类型、方法的返回类型等； |
| ServiceDescrible | 服务的描述类，记录服务的名称、服务里的方法数量、各方法的描述类等； |
| MethodDescrible  | 方法的描述类，记录方法的名称、方法所在服务描述等；           |
| Request          | Message类，rpc方法的输入类型；                               |
| Response         | Message类，rpc方法的返回类型；                               |

protobuf额外生成两个C++类型：

| C++类      | 描述                                                |
| ---------- | --------------------------------------------------- |
| Controller | 手动记录rpc调用过程状态，从而查询调用过程是否成功； |
| Closure    | 回调；                                              |

RPC调用无论客户端还是服务端，核心均是调用CallMethod方法；

```cpp
// 服务端：Service->CallMethod
// 客户端：Service_Stub->CallMethod

void CallMethod(
	const google::protobuf::MethodDescriptor *method,
	google::protobuf::RpcController *controller,
	const google::protobuf::Message *request,
	google::protobuf::Message *response,
	google::protobuf::Closure *done);
```

#### 发布服务设计

发布服务指将服务端的本地服务封装成RPC服务后，记录在服务映射表的过程，当获取客户端RPC调用请求时，根据服务名称和方法名称可通过查询服务映射表获取服务和方法对象，服务映射表采用map嵌套结构如下：

![](https://ydlin.oss-cn-guangzhou.aliyuncs.com/blog-img/servicemap.svg)

服务映射表C++代码设计 ：

```c++
struct ServiceInfo
{
	google::protobuf::Service *m_service;
	std::unordered_map<std::string, const google::protobuf::MethodDescriptor *> m_methodmap;
};

std::unordered_map<std::string, ServiceInfo> m_servicemap;
```

> 完整实现参考：[mpzrpcprovider.cc](src/mpzrpcprovider.cc)->pulishService

#### 异步日志设计

写日志信息到文件使用磁盘I/O，若直接放到RPC方法调用的业务中，会影响RPC请求->RPC方法执行->RPC响应整个流程的速度，因此在Looger日志模块和RPC业务之间添加一个消息队列作为中间件，Muduo只负责向消息中间件添加日志信息，在新线程中Logger模块从消息队列读日志信息，并执行IO磁盘操作，实现了写日志和磁盘IO操作的解耦；

> 异步指Muduo中业务线程不用等待日志写入文件，将日志信息添加到消息队列中，即可继续执行业务逻辑；

![](https://ydlin.oss-cn-guangzhou.aliyuncs.com/blog-img/logger.svg)

- 线程安全：多个线程同时操作消息队列，因此，在队列的push和pop方法中添加mutex锁保证线程安全；
- 线程通信：pop操作中，若消息队列为空，则一直等待，同时Muduo无法获取锁，而不能添加消息，此时造成死锁；因此，在push和pop间使用condition_variable条件变量实现线程通信，当push操作执行后，通知pop操作可以取锁执行；

> 完整实现参考：[lockqueue.h](include/lockqueue.h)
>
> 一个功能更加强大的消息中间件：**kafka**

#### 通信协议设计

客户端和服务端通信，为避免粘包，需要约定一个通信协议；

![](https://ydlin.oss-cn-guangzhou.aliyuncs.com/blog-img/protocol.svg)

采用protobuf定义数据包头的数据结构：

```protobuf
// protobuf版本
syntax = "proto3"; 

// 包名，在C++中表现为命名空间
package rpcheader;

message rpcheader
{
    bytes service_name=1;
    bytes method_name=2;
    uint32 request_size=3;
}
```

header_size是一个int32_t类型值，表示header_str长度，header_str由rpcheader序列化产生，包含一个int32_t类型的request_size，即request_str长度，因此，可根据header_size和request_size确定数据包的边界，避免粘包。

> 采用int32_t类型记录包头大小，而非字符串类型，例如int32_t类型表示范围2^32-1，而4字节字符串表示范围时"0"~"9999"

<!-- tabs:start -->

##### 打包

```c++
// 设置包头
rpcheader::rpcheader header;
header.set_service_name(service_name);
header.set_method_name(method_name);
header.set_request_size(request_str.size());

// 序列化包头->header_str
std::string header_str;
if (!header.SerializeToString(&header_str))
{
	LOG_ERR("%s", "message header_str serialization failed");
	return;
}

// 4字节int32_t类型包头大小转换为4字节字符类型
uint32_t header_size = header_str.size();
std::string send_str;
send_str.insert(0, std::string((char *)&header_size, 4));

// 打包
send_str += header_str + args_str;
```

##### 解包

```c++
// 接收数据包
std::string recv_str = buffer->retrieveAllAsString();
// 从字符流中读取前4个字节的内容，即header_size
uint32_t header_size = 0;
recv_str.copy((char *)&header_size, 4, 0);
// 根据header_size读取数据头的原始字符流，反序列化数据，得到header_str
std::string header_str = recv_str.substr(4, header_size);
rpcheader::rpcheader header;
if (!header.ParseFromString(header_str))
{
	LOG_ERR("%s", "header str deserialization failed");
	return;
}
// 反序列化包头
std::string service_name = header.service_name();
std::string method_name = header.method_name();
uint32_t request_size = header.request_size();
// 获取rpc方法参数的字符流数据，即request_str
std::string request_str = recv_str.substr(4 + header_size, request_size);
```

<!-- tabs:end -->