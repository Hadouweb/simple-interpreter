cmake_minimum_required(VERSION 3.5)
project(simple_interpreter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/lex.c
    src/lex.h
    src/main.c
    src/parse.c
    src/parse.h
    src/run.c
    src/run.h
    tests/4096.txt
    tests/arraysum.txt
    tests/arraysum-simple.txt
    tests/deep.txt
    tests/fizzbuzz.txt
    Makefile
    README.md)

add_executable(simple_interpreter ${SOURCE_FILES})