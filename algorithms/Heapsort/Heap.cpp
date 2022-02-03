//
// Created by Jack Parsons on 2022-02-02.
//

#include "Heap.h"


Heap::Heap(std::vector<int> A) {
    this->A = A;
    heapSize = A.size();

    buildMaxHeap();
}

void Heap::heapSort() {
    buildMaxHeap();
    for (int i = A.size()-1; i > 0; i--) {
        std::swap(A[0], A[i]);
        heapSize--;
        maxHeapify(0);
    }
}

void Heap::maxHeapify(int i){
    int left = 2*i+1;
    int right = 2*i+2;
    int largest = i;

    if(left < heapSize && A[left] > A[i]){
        largest = left;
    }
    if(right < heapSize && A[right] > A[largest]){
        largest = right;
    }

    if(largest != i){
        // Swap
        std::swap(A[i], A[largest]);

        // Recursively Call Max Heapify
        maxHeapify(largest);
    }
}

void Heap::buildMaxHeap() {
    heapSize = A.size();
    for (int i = heapSize / 2 - 1; i >= 0; i--) {
        maxHeapify(i);
    }
}

void Heap::display() {
    for (int i = 0; i < A.size(); ++i) {
        std::cout << A[i] << ", ";
    }
    std::cout << std::endl;
}