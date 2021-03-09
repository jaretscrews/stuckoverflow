cmake_minimum_required(VERSION 3.16)
include_directories(include)
add_library(libStackOverflowApi src/StackOverflowApi.cpp)
target_include_directories(libStackOverflowApi PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")