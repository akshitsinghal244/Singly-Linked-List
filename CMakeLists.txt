cmake_minimum_required(VERSION 3.30)
project(dsa_class C)

set(CMAKE_C_STANDARD 11)

add_executable(dsa_class main.c
        func.c
        func.h)
