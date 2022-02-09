cmake_minimum_required(VERSION 3.21)
project(Code)

set(CMAKE_CXX_STANDARD 17)

add_executable(Code main.cpp algorithms/divide-and-conquer/max-subarray.cpp algorithms/divide-and-conquer/max-subarray.h algorithms/Heapsort/Heap.cpp algorithms/Heapsort/Heap.h Datastructures/PriorityQueue.cpp Datastructures/PriorityQueue.h algorithms/Quicksort/QuickSort.cpp algorithms/Quicksort/QuickSort.h)
