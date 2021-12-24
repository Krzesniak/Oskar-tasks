//
// Created by peter on 24.12.2021.
//

#ifndef OSKAR_TRUCKSCALEOFFINES_H
#define OSKAR_TRUCKSCALEOFFINES_H
#include "ScaleOfFines.h"

class TruckScaleOfFines : public ScaleOfFines{
public:
    TruckScaleOfFines(int speed);

    virtual ~TruckScaleOfFines();

private:
    std::pair<int, int> calculateFine(int speedExceeded) override;

    int calculateHowMuchSpeedIsExceeded(Constant::RoadType roadType) override;

};



#endif //OSKAR_TRUCKSCALEOFFINES_H
