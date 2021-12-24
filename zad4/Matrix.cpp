//
// Created by peter on 24.12.2021.
//

#include <iostream>
#include <iomanip>
#include "Matrix.h"

void Matrix::printMatrix() {
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            std::cout<<std::setw(3)<< i * j<<" ";
        }
        std::cout<<std::endl;
    }

}
