cmake_minimum_required(VERSION 3.20)

project(unittests)

add_library(example_unit_test func.cpp)

enable_testing()

add_executable(unittests Source.cpp)

target_link_libraries(unittests example_unit_test)

add_test(test_all unittests)