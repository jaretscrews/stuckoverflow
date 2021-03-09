cmake_minimum_required(VERSION 3.17)
Project(StuckOverflow)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(libStackOverflowApi)
add_subdirectory(StuckOverflowApplication)
