cmake_minimum_required(VERSION 3.12)
project(testSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(testSort main.cpp test.cpp test.h SortAlgorithm/BubbleSort.cpp SortAlgorithm/BubbleSort.h SortAlgorithm/SelectSort.cpp SortAlgorithm/SelectSort.h SortAlgorithm/AbsSort.cpp SortAlgorithm/AbsSort.h SortAlgorithm/InsertSort.cpp SortAlgorithm/InsertSort.h SortAlgorithm/MergeSort.cpp SortAlgorithm/MergeSort.h)