cmake_minimum_required(VERSION 3.29)
project(inheritance_step4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(inheritance_step4
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h
        fig12_06.cpp)
