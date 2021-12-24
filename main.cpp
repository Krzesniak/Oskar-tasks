#include <iostream>
#include "zad1/TariffApplication.h"
#include "zad2/ClassicSum.h"
#include "zad2/GaussSum.h"
#include "zad3/Fibonacci.h"
#include "zad3/Factorial.h"
#include "zad4/Matrix.h"
#include "zad5//FileReader.h"

int main() {

    TariffApplication tariffApplication;
    // std::cout<<tariffApplication.calculateTariff();
    ClassicSum classicSum;
    //  classicSum.sum();
    GaussSum gaussSum;
    //  gaussSum.sum();
    Fibonacci fibonacci;
    std::cout << fibonacci.iteratively(22) << std::endl;
    std::cout << fibonacci.recursive(22) << std::endl;
    Factorial factorial;
    std::cout << factorial.iteratively(5) << std::endl;
    std::cout << factorial.recursive(5) << std::endl;
    Matrix matrix;
    matrix.printMatrix();
    FileReader fileReader;
    fileReader.getFirstLineOfFileAndSaveToAnother();

}
