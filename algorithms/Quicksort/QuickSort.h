//
// Created by Jack Parsons on 2022-02-09.
//

#ifndef CODE_QUICKSORT_H
#define CODE_QUICKSORT_H
#include <vector>
#include <algorithm>
void quicksort(std::vector<int> &A);
void _quicksort(std::vector<int> &A, int p, int r);
int partition(std::vector<int> &A, int p, int r);
#endif //CODE_QUICKSORT_H
