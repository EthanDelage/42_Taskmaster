cmake_minimum_required(VERSION 3.22.1)
project(Taskmaster C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(src/common)
add_subdirectory(src/server)
add_subdirectory(src/client)

add_compile_options(-Wall -Werror -Wextra)
