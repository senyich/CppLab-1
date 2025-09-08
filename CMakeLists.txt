cmake_minimum_required(VERSION 3.10)
project(CPPFIRSTLAB)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src/namespaces)

set(SOURCES
    src/source/main.cpp
    src/source/solution.cpp
)

add_executable(app ${SOURCES})
