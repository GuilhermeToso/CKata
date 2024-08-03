cmake_minimum_required(VERSION 3.28)
project(CKata)

set(CMAKE_CXX_STANDARD 17)

#Add subdirectories for each algorithm

add_subdirectory(src/learn)

add_executable(CKata main.cpp
)
