cmake_minimum_required(VERSION 3.29)
project(CSV)

# Set the C++ Standard
set(CMAKE_CXX_STANDARD 20)

# Add a shared library target
add_library(CSV SHARED library.cpp)
