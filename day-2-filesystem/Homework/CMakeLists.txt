# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyProgram VERSION 1.0)

# Specify C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add library
# add_library(mylib SHARED

# )

# Add executable
add_executable(program
    filestat.c
)

set_target_properties(program PROPERTIES
    BUILD_RPATH "$ORIGIN"
)

target_link_libraries(program PRIVATE mylib)

# Optional: Add compiler warnings
if(MSVC)
    target_compile_options(program PRIVATE /W4)
else()
    target_compile_options(program PRIVATE -Wall -Wextra -Wpedantic)
endif()
