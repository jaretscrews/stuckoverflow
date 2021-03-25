cmake_minimum_required(VERSION 3.16)
Project(StuckOverflow)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()

add_subdirectory(libraries)
add_subdirectory(external/googletest)

include_directories(${PROJECT_SOURCE_DIR}/libraries)
add_executable(StuckOverflow main.cpp)
target_link_libraries(StuckOverflow PRIVATE libStackOverflowApi libTerminalReader)
