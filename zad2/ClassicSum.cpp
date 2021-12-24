//
// Created by peter on 24.12.2021.
//

#include <iostream>
#include <ctime>
#include "ClassicSum.h"

unsigned long long ClassicSum::sum() {
    long long number;
    std::cout<<"Podaj liczbe sumowanych liczba: "; std::cin>> number;
    const clock_t begin_time = clock();
    long long result =0;
    for(int i=1; i<=number; i++){
        result += i;
    }
    std::cout<<"Wynik sumowania:"<<result<<std::endl;
    std::cout <<"CZAS: "<< float( clock () - begin_time ) /  CLOCKS_PER_SEC;
    return result;
}
