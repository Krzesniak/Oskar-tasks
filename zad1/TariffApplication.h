//
// Created by peter on 24.12.2021.
//

#ifndef OSKAR_TARIFFAPPLICATION_H
#define OSKAR_TARIFFAPPLICATION_H

#include <string>
#include "Constant.h"
#include "CarScaleOfFines.h"
#include "TruckScaleOfFines.h"

class TariffApplication {
private:
    Constant::RoadType roadType;
    Constant::CarType carType;
    ScaleOfFines * scaleOfFines;

public:
    std::string calculateTariff();
};


#endif //OSKAR_TARIFFAPPLICATION_H
