cmake_minimum_required(VERSION 3.26)
project(calendar_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(calendar_project main.cpp
        Time.cpp
        Date.cpp
        Calendar.cpp
        event.h
        event.cpp)
