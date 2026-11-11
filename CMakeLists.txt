cmake_minimum_required(VERSION 4.3)
project(matrix)

set(CMAKE_CXX_STANDARD 20)

add_executable(matrix main.cpp
        Matrix.cpp
        Matrix.h)
