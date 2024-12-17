cmake_minimum_required(VERSION 3.29)
project(inheritance_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(inheritance_project main.cpp
        Point.h Point.cpp
        Shape.h Shape.cpp
        Circle.h Circle.cpp
        Rectangle.cpp)
