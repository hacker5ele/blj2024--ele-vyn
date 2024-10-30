cmake_minimum_required(VERSION 3.29)
project(number_slider C)

set(CMAKE_C_STANDARD 11)

add_executable(number_slider main.c
        cmake-build-debug/utils.c
        cmake-build-debug/utils.h)
