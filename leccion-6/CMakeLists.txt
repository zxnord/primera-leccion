cmake_minimum_required(VERSION 3.10)
project(leccion-5)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(biblioteca-6 SHARED src/biblioteca.cpp)

add_executable(leccion-6 src/main.cpp)

target_link_libraries(leccion-6 biblioteca-6)