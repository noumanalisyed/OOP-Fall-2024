cmake_minimum_required(VERSION 3.29)
project(fig12_01)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(fig12_01
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h
        fig12_01.cpp)
