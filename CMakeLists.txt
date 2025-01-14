cmake_minimum_required(VERSION 3.30)
project(C_Forsberg C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_COMPILER "zig")
set(CMAKE_CXX_COMPILER "zig")

add_executable(C_Forsberg main.c)