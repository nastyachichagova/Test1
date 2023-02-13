//
// Created by Anastasia Chichagova on 13.02.2023.
//

#include "FillMatrix.h"

void FillMatrix(int **a, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            a[i][j] = RandomInt(1, 100);
    }
}