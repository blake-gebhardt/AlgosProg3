cmake_minimum_required(VERSION 3.23)
project(prog3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(prog3
        BigThree.cpp
        BigThree.h
        BigThree_Convert.cpp
        BigThree_Multi.cpp
        BigThreeMain.cpp)
