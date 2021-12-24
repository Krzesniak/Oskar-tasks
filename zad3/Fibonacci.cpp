//
// Created by peter on 24.12.2021.
//

#include <vector>
#include "Fibonacci.h"

unsigned long Fibonacci::iteratively(int number) {
    if(number <= 0) return  0;
    if(number < 2) return 1;
    std::vector<int> basic;
    int number0 = 0;
    int number1 = 1;
    int result;
    basic.push_back(number0);
    basic.push_back(number1);
    basic.push_back(number1);
    for(int i=2; i<=number; i++){
        result = number0 + number1;
        basic.push_back(result);
        number0 =number1;
        number1 = result;
    }
    return result;
}

unsigned long Fibonacci::recursive(int number) {
    if(number <= 1) return number;
    return recursive(number-1) + recursive(number- 2);
}
