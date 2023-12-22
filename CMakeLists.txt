cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)  # or 14, 17, etc., depending on your preference


# Add subdirectories
add_subdirectory(src)
add_subdirectory(test)

# Common include directory for the entire project
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
