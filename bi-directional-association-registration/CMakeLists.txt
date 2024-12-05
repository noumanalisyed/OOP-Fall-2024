cmake_minimum_required(VERSION 3.29)
project(bi_directional_association)

set(CMAKE_CXX_STANDARD 20)

add_executable(bi_directional_association main.cpp
        Student.h
        Course.h
        Course.cpp
        Student.cpp)
