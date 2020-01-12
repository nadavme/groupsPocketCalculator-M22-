cmake_minimum_required(VERSION 3.14.5)
project(Maabada-Mmn22 C)

set(CMAKE_C_STANDARD 90)

set(PROJECT_HEADERS
        set.h
        myset.h)

set(PROJECT_SOURCES
        set.c
        myset.c)

add_executable(Maabada-Mmn22 ${PROJECT_SOURCES} ${PROJECT_HEADERS})