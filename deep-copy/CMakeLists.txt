cmake_minimum_required(VERSION 3.29)
project(deep_copy)

set(CMAKE_CXX_STANDARD 20)

add_executable(deep_copy main.cpp
        Book.h
        Book.cpp
        Author.h
        Author.cpp
        Library.h
        Library.cpp)
