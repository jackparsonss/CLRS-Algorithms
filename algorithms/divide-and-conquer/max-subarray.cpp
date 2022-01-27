#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
//
// Created by Jack Parsons on 2022-01-26.
//

#include<tuple>
#include<vector>
#include "max-subarray.h"

// O(n log n) runtime
std::tuple<int, int, int>findMaxSubArray(std::vector<int> A, int low, int high){
    // base case
    if(high == low){
        return { low, high, A[low] };
    }
    int mid = (low + high) / 2;
    // Recursively get max sub-arrays for left, right, and crossover sections
    auto [left_low, left_high, left_sum] = findMaxSubArray(A, low, mid);
    auto [right_low, right_high, right_sum] = findMaxSubArray(A, mid+1, high);
    auto [cross_low, cross_high, cross_sum] = findMaxCrossingSubArray(A, low, mid, high);

    // Return best option
    if(left_sum >= right_sum && left_sum >= cross_sum){
        return { left_low, left_high, left_sum };
    }
    if(right_sum >= left_sum && right_sum >= cross_sum){
        return { right_low, right_high, right_sum };
    }
    return { cross_low, cross_high, cross_sum };
}

// Returns indices marking the maximum subarray which crosses the midpoint,
// and the sum of the values in the maximum subarray
// O(n) runtime
std::tuple<int, int, int>findMaxCrossingSubArray(std::vector<int> A, int low, int mid, int high) {
    int left_sum = INT_MIN;
    int right_sum = INT_MIN;
    int sum = 0, max_left = 0, max_right = 0;

    // Find maximum subarray of left half
    for (int i = mid; i >= low ; i--) {
        sum += A[i];
        if(sum > left_sum) {
            left_sum = sum;
            max_left = i;
        }
    }
    // Reset sum for right side
    sum = 0;

    // Find maximum subarray of right half
    for (int j = mid+1; j < high; j++) {
        sum += A[j];
        if(sum > right_sum){
            right_sum = sum;
            max_right = j;
        }
    }
    return { max_left, max_right, left_sum + right_sum };
}
#pragma clang diagnostic pop