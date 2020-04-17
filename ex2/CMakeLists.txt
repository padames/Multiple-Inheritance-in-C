cmake_minimum_required(VERSION 3.15)
project(ex2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(./cmake-build-debug)

set(SOURCE_FILES main.cpp Point.cpp Shape.cpp Shape.h)
add_executable(ex2
        ${SOURCE_FILES})