cmake_minimum_required(VERSION 3.29)
project(Linked_list C)

set(CMAKE_C_STANDARD 11)

add_executable(Linked_list main.c
        linkedlist.c
        linkedlist.h
)
