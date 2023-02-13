//
// Created by Anastasia Chichagova on 13.02.2023.
//

#include "PrintMatrix.h"
void PrintMatrix (int **a, int m, int n){

    std::cout << "Матрица" << std::endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            std::cout << a[i][j] << " ";
        std::cout << "\n";
    }
};