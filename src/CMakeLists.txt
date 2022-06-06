# 只有CMakeLists 变化的时候才会重新生成，不会重新makefile
aux_source_directory(. SRC_LIST)
# 新添加的文件 
set(SRC_LIST 
    mprpcapplication.cc 
    mprpcconfig.cc 
    rpcheader.pb.cc 
    rpcprovider.cc 
    mprpcchannel.cc
    mprpccontroller.cc
    logger.cc
    zookeeperutil.cc)
SET( CMAKE_CXX_FLAGS "-std=c++11 -O3")
add_library(mprpc ${SRC_LIST})  # 因为src下文件要作为一个库提供给用户
target_link_libraries(mprpc muduo_net muduo_base pthread zookeeper_mt) # muduo库的顺序要注意，zookeeper_mt是多线程版本


# aux_source_directory(. SRC_LIST)
# add_library(mprpc ${SRC_LIST})