cmake_minimum_required(VERSION 3.14)
project(01_cmake)

include_directories(../googletest/googletest/include)
link_directories(../googletest/build/lib)

add_executable(01_cmake main.cpp)
target_link_libraries(01_cmake gtest gtest_main pthread)
