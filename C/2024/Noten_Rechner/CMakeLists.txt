cmake_minimum_required(VERSION 3.29)
project(Noten_Rechner C)

set(CMAKE_C_STANDARD 11)

add_executable(Noten_Rechner main.c
        note.c
        note.h)
