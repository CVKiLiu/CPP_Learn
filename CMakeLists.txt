cmake_minimum_required(VERSION 3.12)
project(cpplearn)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpplearn main.cpp dynamicmemory/src/StrBlob.cpp dynamicmemory/src/StrBlob.h)