cmake_minimum_required(VERSION 3.18)
project(tiny_webserver)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp)

add_executable(test_thread_pool test/test_threadpool.cpp)

add_executable(test_webserver test/test_webserver.cpp)

