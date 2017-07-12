cmake_minimum_required (VERSION 2.6)

project (n1570)
include_directories(${CMAKE_SOURCE_DIR}/include)
set (SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
add_executable(argc ${SOURCE_DIR}/argc.c)
