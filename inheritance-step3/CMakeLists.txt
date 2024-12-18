cmake_minimum_required(VERSION 3.29)
project(inheritance_step3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(inheritance_step3
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h
        fig12_03.cpp)
