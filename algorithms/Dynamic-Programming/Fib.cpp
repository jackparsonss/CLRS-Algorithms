//
// Created by Jack Parsons on 2022-03-12.
//

#include "Fib.h"
int Fib(int n){
    int *A = new int[n+1];
    A[0] = 0;
    A[1] = 1;
    for (int i = 2; i < n; ++i) {
        A[i] = A[i-1] + A[i-2];
    }
    return A[n];
}