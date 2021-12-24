//
// Created by peter on 24.12.2021.
//

#ifndef OSKAR_CARSCALEOFFINES_H
#define OSKAR_CARSCALEOFFINES_H

#include "ScaleOfFines.h"


class CarScaleOfFines :  public ScaleOfFines{
public:
    CarScaleOfFines(int speed);

    virtual ~CarScaleOfFines();

private:
    std::pair<int, int> calculateFine(int speedExceeded) override;

    int calculateHowMuchSpeedIsExceeded(Constant::RoadType roadType) override;

};


#endif //OSKAR_CARSCALEOFFINES_H
