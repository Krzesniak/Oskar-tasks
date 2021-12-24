//
// Created by peter on 24.12.2021.
//

#ifndef OSKAR_SCALEOFFINES_H
#define OSKAR_SCALEOFFINES_H

#include <string>
#include "Constant.h"

class ScaleOfFines {
protected:
    int speed;
public:
    explicit ScaleOfFines(int speed) {
        this->speed = speed;
    }

    virtual ~ScaleOfFines() {
    }

    std::pair<int, int> calculate(Constant::RoadType roadType) {
        int speedDiff = calculateHowMuchSpeedIsExceeded(roadType);
        return !isSpeedLimitExceeded(speedDiff) ? std::pair<int, int>(0, 0) : calculateFine(speedDiff);
    }

    virtual std::pair<int, int> calculateFine(int speedExceeded)=0;

    static bool isSpeedLimitExceeded(int speed) {
        if (speed < 0) return false;
        return true;
    }

    virtual int calculateHowMuchSpeedIsExceeded(Constant::RoadType roadType)=0;


};




#endif //OSKAR_SCALEOFFINES_H
