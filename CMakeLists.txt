cmake_minimum_required(VERSION 3.10)

project(josephus_circle)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the output directory for the executable to be the project source directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

# Add executable
add_executable(code main.cpp)
