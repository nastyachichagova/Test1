//
// Created by Anastasia Chichagova on 13.02.2023.
//

#include "Ex3.h"
int sum(int a, int b){
    return a + b;
}

int ded(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}


void Calc (int &result, int a, int b, int (*operation)(int, int)){
    result = operation(a, b);
}


void Ex3(){
    int a, b, res = 0;

    std::cout << "Введите 2 целых числа" <<std::endl;

    std::cin >> a;
    std::cin >> b;

    Calc(res, a, b, sum);
    std::cout << "Сумма " << res << std::endl;

    Calc(res, a, b, ded);
    std::cout << "Разность " << res << std::endl;

    Calc(res, a, b, mul);
    std::cout << "Произведение " << res << std::endl;

}