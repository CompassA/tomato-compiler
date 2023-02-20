cmake_minimum_required(VERSION 3.0.0)
project(tomato-compiler VERSION 0.1.0)

include(CTest)
include(cmake-conf/gtest_conf.cmake)
include(cmake-conf/common_conf.cmake)

enable_testing()

add_executable(tomato-compiler main.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(googletest)
add_subdirectory(antlr4-code)
