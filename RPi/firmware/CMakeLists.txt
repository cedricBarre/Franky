cmake_minimum_required(VERSION 2.8.9)
project (franky)

# Link the headers files
include_directories(include)

# Create a list for all 
file(GLOB SOURCES "source/*.cpp")

add_executable(franky ${SOURCES})