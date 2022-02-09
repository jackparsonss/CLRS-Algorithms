//
// Created by Jack Parsons on 2022-02-09.
//

#include "QuickSort.h"

// On average, runs in O(n log n)
void quicksort(std::vector<int> &A){
    _quicksort(A,0, A.size()-1);
}
void _quicksort(std::vector<int> &A, int p, int r){
    if(p < r) {
        int q = partition(A, p, r);
        _quicksort(A, p, q-1);
        _quicksort(A, p+1, r);
    }
}

int partition(std::vector<int> &A, int p, int r){
    int pivot = A[r];
    int i = p - 1;
    for(int j = p; j < r - 1; j++){
        if(A[j] < pivot){
            i++;
            std::swap(A[i], A[j]);
        }
    }
    std::swap(A[i+1], A[r]);
    return i + 1;
}
