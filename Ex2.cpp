//
// Created by Anastasia Chichagova on 13.02.2023.
//

#include "Ex2.h"

double AverageValue(int *arr, int a, int b){
    int sum = 0, k = 0;

    for (int i = a; i < b + 1; i++){
        k++;
        sum += arr[i];
    }

    float average = sum/k;

    return average;
}


void Ex2(){
    int size, k;
    std::cout << "Введите размер массива" << std::endl;
    std::cin >> size;

    std::cout << "Введите k" << std::endl;
    std::cin >> k;

    int *arr = new int [size];

    for (int i = 0; i < size; i++){
        std::cout << "Введите " << i + 1 << "-й элемент" << std::endl;
        std::cin >> arr[i];
    }

    std::cout << "Исходный массив" << std::endl;

    for (int i = 0; i < size; i++){
        std::cout << *(arr + i) << " ";
    }

    double min_average = AverageValue(arr, 0, size - 1);


    for (int i = 0; i < size - k + 1; i++){
        if (AverageValue(arr, i, i + k - 1) < min_average){
            min_average = AverageValue(arr, i, i + k - 1);
        }
    }

    std::cout << "\nОтвет " << min_average << std::endl;

    delete[] arr;
}