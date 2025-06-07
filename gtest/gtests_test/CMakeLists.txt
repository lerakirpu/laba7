cmake_minimum_required(VERSION 3.14)
project(GTestTests)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

file(GLOB TASK_SOURCES "../tasks/*.cpp")

add_executable(GTestTests tests.cpp ${TASK_SOURCES})
target_link_libraries(GTestTests gtest gtest_main)
