//
// Created by peter on 24.12.2021.
//

#include <iostream>
#include <ctime>
#include "GaussSum.h"

unsigned long long GaussSum::sum() {
    long long number;
    std::cout<<"Podaj liczbe sumowanych liczba: "; std::cin>> number;
    const clock_t begin_time = clock();
    long long result = number * (number+1)/ 2;
    std::cout<<"Wynik sumowania: "<<result<<std::endl;
    std::cout <<"CZAS: "<< float( clock () - begin_time ) /  CLOCKS_PER_SEC;

    return result;
}
