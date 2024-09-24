#ifndef Truck_h
#define Truck_h

#include "Vehicle.h"

class Truck : public Vehicle
{
public:
    Truck(const std::string licensePlate) : Vehicle(VehicleType::TRUCK, licensePlate)
    {}
};

#endif