cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
project(gh_ci_demo)

include_directories(include)
add_library(utils src/utils.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main utils)

# This flags are used if cmake is called with -DCMAKE_BUILD_TYPE=PROFILE
# set(CMAKE_C_FLAGS_PROFILE --coverage)
# set(CMAKE_CXX_FLAGS_PROFILE --coverage)
add_compile_options("--coverage")
add_link_options("--coverage")

enable_testing()
add_subdirectory(test)
