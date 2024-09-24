#ifndef Car_h
#define Car_h

#include "Vehicle.h"

class Car : public Vehicle
{
public:
    Car(const std::string &licensePlate) : Vehicle(VehicleType::CAR, licensePlate)
    {}
};

#endif