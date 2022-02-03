//
// Created by Jack Parsons on 2022-02-02.
//

#include "PriorityQueue.h"

#define parent(i) i/2

PriorityQueue::PriorityQueue(std::vector<int> A) {
    this->A = A;
    size = A.size();
    buildMaxHeap();
}

// Return largest element in heap
int PriorityQueue::heapMax() {
    return A[0];
}

// Return and remove the largest element in heap
// O(log n) runtime
int PriorityQueue::heapExtractMax() {
    if(size < 0) {
        throw "heap underflow";
    }
    int max = A[0];
    A[0] = A[size-1];
    size--;
    maxHeapify(1);

    return max;
}

// Increases the key value at A[i]
//  O(log n) Runtime
void PriorityQueue::heapIncreaseKey(int i, int key) {
    if(key < A[i]){
        throw "New key is smaller than current key";
    }

    A[i] = key;
    while(parent(i) >= 0 && A[parent(i)] < A[i]) {
        std::swap(A[i], A[parent(i)]);
        i = parent(i);
    }
}

// Adds a new element to the PQ use value key
// O(log n) runtime
void PriorityQueue::maxHeapInsert(int key) {
    size++;
    A.push_back(key);

    int i = size;
    while (parent(i) >= 0 && A[parent(i)]<A[i]) {
        std::swap(A[parent(i)],A[i]);
        i = parent(i);
    }
}

// Maintain max-heap property
void PriorityQueue::maxHeapify(int i){
    int left = 2*i+1;
    int right = 2*i+2;
    int largest = i;

    if(left < size && A[left] > A[i]){
        largest = left;
    }
    if(right < size && A[right] > A[largest]){
        largest = right;
    }

    if(largest != i){
        // Swap
        std::swap(A[i], A[largest]);

        // Recursively Call Max Heapify
        maxHeapify(largest);
    }
}

// Create max heap from array A
void PriorityQueue::buildMaxHeap() {
    size = A.size();
    for (int i = size / 2 - 1; i >= 0; i--) {
        maxHeapify(i);
    }
}

void PriorityQueue::display() {
    for (int i = 0; i < A.size(); ++i) {
        std::cout << A[i] << ", ";
    }
    std::cout << std::endl;
}