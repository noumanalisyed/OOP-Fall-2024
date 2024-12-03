cmake_minimum_required(VERSION 3.29)
project(uni_directional_association)

set(CMAKE_CXX_STANDARD 20)

add_executable(uni_directional_association main.cpp
        Book.h
        Library.cpp
        Book.cpp)
