#include<iostream>
#include<vector>

#include "./algorithms/divide-and-conquer/max-subarray.h"
#include "./algorithms/Heapsort/Heap.h"

int main() {
    // Heaps
    if(true) {
        std::vector<int> A ={4,1,3,2,16,9,10,14,8,7};
//        std::vector<int> A ={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
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
