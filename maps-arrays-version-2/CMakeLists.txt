cmake_minimum_required(VERSION 3.28)
project(maps_arrays_version_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(maps_arrays_version_2 main.cpp
        WeatherCSVReader.h
        WeatherEntry.h
        WeatherEntry.h
        WeatherNode.cpp
        WeatherEntry.cpp)
