cmake_minimum_required(VERSION 3.28)
project(c_book C)


set(CMAKE_C_STANDARD 99)

add_executable(c_book ex5.c)

target_link_libraries(c_book m)