#ifndef MotorCycle_h
#define MotorCycle_h

#include "Vehicle.h"

class MotorCycle : public Vehicle
{
public:
    MotorCycle(const std::string licensePlate) : Vehicle(VehicleType::MOTORCYCLE, licensePlate)
    {}
};

#endif