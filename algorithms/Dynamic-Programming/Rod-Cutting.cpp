//
// Created by Jack Parsons on 2022-03-12.
//

#include "Rod-Cutting.h"
int CutRod(std::vector<int> p, int n){
    int *r = new int[n+1];
    r[0] = 0;

    for (int i = 0; i < n; ++i) {
        int q = INT_MIN;
        for (int j = 0; j < i; ++j) {
            q = std::max(q, p[i] + r[j - i]);
        }
        r[i] = q;
    }

    return r[n];
}