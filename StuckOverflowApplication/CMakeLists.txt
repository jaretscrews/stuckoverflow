cmake_minimum_required(VERSION 3.17)
add_executable(StuckOverflow main.cpp)
target_link_libraries(StuckOverflow PRIVATE libStackOverflow)