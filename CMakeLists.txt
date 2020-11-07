cmake_minimum_required(VERSION 3.18)
project(tiny_webserver)

set(CMAKE_CXX_STANDARD 17)

add_executable(tiny_webserver main.cpp src/threadpool.h)
