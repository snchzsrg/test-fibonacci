cmake_minimum_required(VERSION 3.10)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_executable(fibonacci test_fibonacci.cpp)
target_link_libraries(fibonacci ${GTEST_LIBRARIES} pthread)
