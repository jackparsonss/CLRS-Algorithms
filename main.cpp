#include<iostream>
#include<vector>

#include "./algorithms/divide-and-conquer/max-subarray.h"
#include "./algorithms/Heapsort/Heap.h"
#include "./Datastructures/PriorityQueue.h"
#include "./algorithms/Quicksort/QuickSort.h"

int main() {
    // Quicksort
    if(true) {
        std::vector<int>A = {9,32,192,439,2,12,4,1,45,8932,234,6};
        quicksort(A);
        for(int i : A){
            std::cout << i << ", ";
        }
        std::cout << std::endl;
    }

    // Priority Queue
    if(false){
        std::vector<int> A ={4,1,3,2,16,9,10,14,8,7};
        PriorityQueue pq(A);
        pq.display();
        std::cout << "max: " << pq.heapMax() << std::endl;
        pq.heapExtractMax();
        pq.maxHeapInsert(45);
        pq.display();
        pq.heapIncreaseKey(2, 90);
        pq.display();
    }

    // Heap
    if(false) {
        std::vector<int> A ={4,1,3,2,16,9,10,14,8,7};
        Heap max_heap(A);
        max_heap.display();
        max_heap.heapSort();
        max_heap.display();
    }

    // Find Max Subarray:
    if(false){
        std::vector<int> A ={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
        auto [left, right, sum] = findMaxSubArray(A, 0, A.size());
        std::cout << "Left: " << left << std::endl;
        std::cout << "Right: " << right << std::endl;
        std::cout << "Sum: " << sum << std::endl;
    }

    return 0;
}
