cmake_minimum_required(VERSION 3.0.0)
project("e2.17")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB MY_SOURCES "src/*.*")
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
add_executable(e2.17 ${MY_SOURCES})
