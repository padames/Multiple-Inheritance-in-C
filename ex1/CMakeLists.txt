cmake_minimum_required(VERSION 3.2)
project(Ex1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(./cmake-build-debug)

set(SOURCE_FILES ProjectEx1.cpp)
add_executable(Ex1 ${SOURCE_FILES})