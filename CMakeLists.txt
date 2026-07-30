cmake_minimum_required(VERSION 4.3)
project(32bit_virtual_machine)

set(CMAKE_CXX_STANDARD 23)

add_executable(32bit_virtual_machine src/main.cpp
        src/Byte.cpp
        src/Byte.h
        src/ALU/ALU.cpp
        src/ALU/ALU.h
        src/Word.cpp
        src/Word.h)
