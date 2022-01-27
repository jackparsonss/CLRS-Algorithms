#include<iostream>
#include<vector>
#include "./algorithms/divide-and-conquer/max-subarray.h"

int main() {
    // Find Max Subarray:
    std::vector<int> A ={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    auto [left, right, sum] = findMaxSubArray(A, 0, A.size());
    std::cout << "Left: " << left << std::endl;
    std::cout << "Right: " << right << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
