cmake_minimum_required(VERSION 4.0)
project(shop)

set(CMAKE_CXX_STANDARD 20)

add_executable(shop main.cpp
        Order.cpp
        Order.h
        Order.h
        Customer.cpp
        Customer.h
        Product.cpp
        Product.h)
