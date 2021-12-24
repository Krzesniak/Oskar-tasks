//
// Created by peter on 24.12.2021.
//

#include "Factorial.h"

unsigned long Factorial::iteratively(int number) {
    int result = 1;
    for(int i=1; i<=number; i++){
        result *= i;
    }
    return result;
}

unsigned long Factorial::recursive(int number) {
    if(number < 1) return  1;
    return number * recursive(number -1 );
}
