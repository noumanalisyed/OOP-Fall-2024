cmake_minimum_required(VERSION 3.29)
project(polymorphism)

set(CMAKE_CXX_STANDARD 17)

add_executable(polymorphism main.cpp
        Point.h
        Rectangle.cpp
        Circle.cpp
        Point.cpp
        Shape.cpp)
