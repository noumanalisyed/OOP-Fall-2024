cmake_minimum_required(VERSION 3.29)
project(inheritance_step6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(inheritance_step6
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h
        Employee.cpp
        Employee.h
        fig12_19.cpp
        SalariedEmployee.cpp
        SalariedEmployee.h)
