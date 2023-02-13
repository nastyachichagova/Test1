//
// Created by Anastasia Chichagova on 13.02.2023.
//

#include "RandomInt.h"

int RandomInt(int a, int b){
    return a + rand() % (b - a);
}