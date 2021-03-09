cmake_minimum_required(VERSION 3.17)
include_directories(include)
add_library(libStackOverflow src/StackOverflowApi.cpp)
target_include_directories(libStackOverflow PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")