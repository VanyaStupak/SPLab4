cmake_minimum_required(VERSION 3.27)
project(CLionProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLionProject main.cpp
        calculator.cpp
        calculator.h)
