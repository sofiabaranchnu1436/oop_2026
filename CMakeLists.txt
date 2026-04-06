cmake_minimum_required(VERSION 4.1)
project(untitled3)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled3 main.cpp
        Library.cpp
        Library.h
        Book.cpp
        Book.h
        Reader.cpp
        Reader.h)
