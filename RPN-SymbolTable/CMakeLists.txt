cmake_minimum_required(VERSION 3.26)
project(RPN_SymbolTable)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPN_SymbolTable main.cpp
        symbol.cpp
        symboltbl.cpp
        node.cpp
        stack.cpp)
