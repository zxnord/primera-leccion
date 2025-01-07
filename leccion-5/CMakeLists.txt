cmake_minimum_required(VERSION 3.10)
project(leccion-5)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(biblioteca-5 SHARED src/biblioteca.cpp)
add_library(biblioteca-5b SHARED src/biblioteca5b.cpp)

add_executable(leccion-5 src/main.cpp)

target_link_libraries(leccion-5 biblioteca-5 biblioteca-5b)