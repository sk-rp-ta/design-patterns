cmake_minimum_required(VERSION 3.16.3)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

project(design-patterns)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_compile_options(-O3 -Wall -Werror -pedantic)

include(FetchGtest)

add_subdirectory(creational)

enable_testing()
add_subdirectory(tests)