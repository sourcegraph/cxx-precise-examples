cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(Project_Geometry_square)

add_library(geometry_square src/square.cpp src/square.hpp)
target_include_directories(geometry_square PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../../arithmetic/include")
target_link_libraries(geometry_square arithmetic)
# include_directories(${arithmetic_SOURCE_DIR})
# target_link_libraries(geometry_square PUBLIC arithmetic)

# cmake_minimum_required(VERSION 3.10)

# project(Project_Arithmetic)

# add_library(arithmetic src/multiplication.cpp)
# target_include_directories(arithmetic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")