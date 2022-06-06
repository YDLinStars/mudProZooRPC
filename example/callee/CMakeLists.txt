# set(SRC_LIST userservice.cc ../user.pb.cc)
set(SRC_LIST friendservice.cc ../friend.pb.cc)
SET( CMAKE_CXX_FLAGS "-std=c++11 -O3")
# 生成可执行文件
add_executable(provider ${SRC_LIST})
target_link_libraries(provider mprpc protobuf)

# set(SRC_LIST userservice.cc ../user.pb.cc)
# add_executable(provider ${SRC_LIST})
# target_link_libraries(provider mprpc protobuf)
