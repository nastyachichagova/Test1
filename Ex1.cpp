//
// Created by Anastasia Chichagova on 13.02.2023.
//

#include "Ex1.h"

int DiagonalSum (int **a, int m, int n){
    int s = 0;

    for (int i = 0; i < m; ++i){
        s += a[i][i];
    }

    return s;
}

void Ex1(){

    int m, n; //m строк n столбцов

    std::cout << "Введите количество строк" << std::endl;
    std::cin >> m;

    std::cout << "Введите количество столбцов" << std::endl;
    std::cin >> n;

    int **arr = new int*[m];

    for (int i = 0; i < m; ++i){
        arr[i] = new int[n];
    }

    FillMatrix(arr, m, n);

    PrintMatrix(arr, m, n);

    int sum = DiagonalSum(arr, m, n);

    std::cout << "Сумма = " << sum << std::endl;

    for (int i = 0; i < m; ++i){
        delete[] arr[i];
    }
    delete[] arr;

}