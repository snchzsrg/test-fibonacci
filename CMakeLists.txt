cmake_minimum_required(VERSION 3.10)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_executable(test_fib src/test_fibonacci.cpp)
target_link_libraries(test_fib ${GTEST_LIBRARIES} pthread)
