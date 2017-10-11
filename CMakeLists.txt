cmake_minimum_required(VERSION 3.8)
project(calgs)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Student.h SortTestHelper.h SelectionSort.h InsertionSort.h BubbleSort.h ShellSort.h)
add_executable(calgs ${SOURCE_FILES})