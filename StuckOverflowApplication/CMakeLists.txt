cmake_minimum_required(VERSION 3.16)
include_directories(${PROJECT_SOURCE_DIR}/libraries)
add_executable(StuckOverflow main.cpp)
target_link_libraries(StuckOverflow PRIVATE libStackOverflowApi)