//
// Created by peter on 24.12.2021.
//

#include "TruckScaleOfFines.h"


int TruckScaleOfFines::calculateHowMuchSpeedIsExceeded(Constant::RoadType roadType) {
    switch (roadType) {

        case Constant::RESIDENCE_ZONE:
            return this->speed - 20;
        case Constant::BUILT_UP_AREA:
            return this->speed - 70;
        case Constant::SINGLE_CARRIAGEWAY_ROAD:
            return this->speed - 80;
        case Constant::DUAL_CARRIAGEWAY_ROAD:
            return this->speed - 80;
        case Constant::SINGLE_CARRIAGEWAY_EXPRESSWAYS:
            return this->speed - 80;
        case Constant::DUAL_CARRIAGEWAY_EXPRESSWAYS:
            return this->speed - 80;
        case Constant::HIGHWAY:
            return this->speed - 80;
    }
    return 0;
}

std::pair<int, int> TruckScaleOfFines::calculateFine(int speedExceeded) {

    if(speedExceeded < 0) return std::pair<int, int>(0, 0);
    else if(speedExceeded > 0 && speedExceeded <= 10) return std::pair<int, int>(0, 50);
    else if(speedExceeded > 10 && speedExceeded <= 20) return std::pair<int, int>(50, 100);
    else if(speedExceeded > 20 && speedExceeded <= 30) return std::pair<int, int>(100, 200);
    else if(speedExceeded > 30 && speedExceeded <= 40) return std::pair<int, int>(200, 300);
    else if(speedExceeded > 40 && speedExceeded <= 50) return std::pair<int, int>(300, 400);
    else return std::pair<int, int>(400, 500);
}
TruckScaleOfFines::TruckScaleOfFines(int speed) : ScaleOfFines(speed) {

}

TruckScaleOfFines::~TruckScaleOfFines() {

}


