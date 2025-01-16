cmake_minimum_required(VERSION 3.10)
project(leccion-5)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(biblioteca-7 SHARED src/biblioteca.cpp)

add_executable(leccion-7 src/main.cpp)

target_link_libraries(leccion-7 biblioteca-7)