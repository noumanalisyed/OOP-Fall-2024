cmake_minimum_required(VERSION 3.29)
project(exchange_template)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(exchange_template
        src/CSVReader.cpp
        src/CSVReader.h
        src/main.cpp
        src/MerkelMain.cpp
        src/MerkelMain.h
        src/OrderBook.cpp
        src/OrderBook.h
        src/OrderBookEntry.cpp
        src/OrderBookEntry.h
        src/Wallet.cpp
        src/Wallet.h)
