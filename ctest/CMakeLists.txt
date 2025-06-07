cmake_minimum_required(VERSION 3.10)
project(GridPathProject)

set(CMAKE_CXX_STANDARD 17)

# Основная программа
add_executable(task2
    main.cpp
    task2.cpp
)

# Тесты
enable_testing()

# Тест 1
add_executable(test1 test1.cpp task2.cpp)
add_test(NAME GridTest1 COMMAND test1)

# Тест 2
add_executable(test2 test2.cpp task2.cpp)
add_test(NAME GridTest2 COMMAND test2)

# Тест 3
add_executable(test3 test3.cpp task2.cpp)
add_test(NAME GridTest3 COMMAND test3)
