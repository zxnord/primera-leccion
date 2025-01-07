cmake_minimum_required(VERSION 3.10)
project(leccion-4)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(biblioteca-4 SHARED src/biblioteca.cpp)

add_executable(leccion-4 src/main.cpp)

target_link_libraries(leccion-4 biblioteca-4)