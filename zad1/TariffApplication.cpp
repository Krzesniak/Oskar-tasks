//
// Created by peter on 24.12.2021.
//

#include <iostream>
#include "TariffApplication.h"

std::string TariffApplication::calculateTariff() {
    int chosenCar;
    int chosenRoad;
    std::cout << "Witaj w taryfikatorze dla pojazdow !!!" << std::endl;
    std::cout << "1. Samochod osobowy" << std::endl;
    std::cout << "2. Ciezarowka" << std::endl;
    std::cout << "3. Wyjscie" << std::endl;
    std::cout << "Wybierz samochod: ";
    std::cin >> chosenCar;

    if (chosenCar == 1) this->carType = Constant::CAR;
    else if (chosenCar == 2) this->carType = Constant::TRUCK;

    std::cout << "1. Strefa zamieszkania" << std::endl;
    std::cout << "2. Teren zabudowany" << std::endl;
    std::cout << "3. Droga jednojezdniowa dwukierunkowa" << std::endl;
    std::cout << "4. Droga ekspresowa jednojezdniowa" << std::endl;
    std::cout << "5. Droga dwujezdniowa o dwoch pasach ruchu w kazda strone" << std::endl;
    std::cout << "6. Droga ekspresowa dwujezdniowa" << std::endl;
    std::cout << "7. Autostrada" << std::endl;
    std::cout << "Wybierz droge: "; std::cin >> chosenRoad;

    if (chosenRoad == 1) this->roadType = Constant::RESIDENCE_ZONE;
    else if (chosenRoad == 2) this->roadType = Constant::BUILT_UP_AREA;
    else if (chosenRoad == 3) this->roadType = Constant::SINGLE_CARRIAGEWAY_ROAD;
    else if (chosenRoad == 4) this->roadType = Constant::SINGLE_CARRIAGEWAY_EXPRESSWAYS;
    else if (chosenRoad == 5) this->roadType = Constant::DUAL_CARRIAGEWAY_ROAD;
    else if (chosenRoad == 6) this->roadType = Constant::DUAL_CARRIAGEWAY_EXPRESSWAYS;
    else if (chosenRoad == 7) this->roadType = Constant::HIGHWAY;

    int speed;
    std::cout << "Podaj uzyskana predkosc: ";
    std::cin >> speed;

    if(this->carType == Constant::CAR)     this->scaleOfFines = new CarScaleOfFines(speed);
    else this->scaleOfFines = new TruckScaleOfFines(speed);
    std::pair<int, int> pair =
            scaleOfFines->calculate(this->roadType);
    delete scaleOfFines;

    return "Minimalna wartosc mandatu wynosi: " + std::to_string(pair.first) + " a maksymlana wartosc: " +
           std::to_string(pair.second);
}
