cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(Project_Arithmetic)

add_library(arithmetic src/multiplication.cpp)
target_include_directories(arithmetic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")