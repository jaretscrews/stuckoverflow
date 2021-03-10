cmake_minimum_required(VERSION 3.16)
Project(StuckOverflow)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(libraries)
add_subdirectory(external/googletest)
add_subdirectory(StuckOverflowApplication)
