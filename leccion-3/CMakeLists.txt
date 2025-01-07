cmake_minimum_required(VERSION 3.10)
project(leccion-3)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(biblioteca-3 SHARED src/biblioteca.cpp)

add_executable(leccion-3 src/main.cpp)

target_link_libraries(leccion-3 biblioteca-3)