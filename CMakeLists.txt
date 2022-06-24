# Specify cmake version
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(foobar VERSION 0.1.0)

# Specify the C++ standard
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3")

# Set location for .so files
set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}")

# Set location for executables
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Add libraries
add_subdirectory(src)

# Install library
install(TARGETS Foo Bar LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
