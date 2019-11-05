cmake_minimum_required(VERSION 3.12)
project(inherEx)

set(CMAKE_CXX_STANDARD 14)

add_executable(inherEx main.cpp Person.h Person.cpp Student.cpp Student.h)