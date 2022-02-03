//
// Created by Jack Parsons on 2022-02-02.
//

#ifndef CODE_PRIORITYQUEUE_H
#define CODE_PRIORITYQUEUE_H

#include <vector>
#include <iostream>
#include <limits>

class PriorityQueue {
private:
    int size;

    void maxHeapify(int i);
    void buildMaxHeap();
public:
    std::vector<int> A;

    PriorityQueue(std::vector<int> A);

    void display();
    int heapMax();
    int heapExtractMax();
    void heapIncreaseKey(int i, int key);
    void maxHeapInsert(int key);
};


#endif //CODE_PRIORITYQUEUE_H
