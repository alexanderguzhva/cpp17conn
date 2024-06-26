# the solution that consists of 1 c++17 executable, 1 c++17 library and 1 c++20 library.
# the goal is to check whether c++20 library can be connected to c++17 executable.

cmake_minimum_required(VERSION 3.28)

project(cpp17conn CXX)

add_subdirectory(libcpp17)
add_subdirectory(libcpp20)
add_subdirectory(executable)
