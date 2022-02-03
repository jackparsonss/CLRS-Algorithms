//
// Created by Jack Parsons on 2022-02-02.
//

#ifndef CODE_HEAP_H
#define CODE_HEAP_H

#include <vector>
#include <algorithm>
#include <iostream>


class Heap {
private:
    int heapSize;
public:
    std::vector<int> A;

    Heap(std::vector<int> A);

    void maxHeapify(int i);
    void buildMaxHeap();
    void heapSort();
    void display();
};


#endif //CODE_HEAP_H
