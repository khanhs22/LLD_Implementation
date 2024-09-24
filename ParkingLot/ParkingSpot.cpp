#include "ParkingSpot.h"

ParkingSpot::ParkingSpot(int number, VehicleType type) : 
    m_number(number), m_spotType(type)
{
}

bool ParkingSpot::isAvailable() const
{
    return m_vehicle == nullptr;
}

VehicleType ParkingSpot::getType() const
{
    return m_spotType;
}

int ParkingSpot::getNumber() const
{
    return m_number;
}

void ParkingSpot::parkVehicle(std::shared_ptr<Vehicle> vehicle)
{
    m_vehicle = vehicle;
}

void ParkingSpot::unparkVehicle()
{
    m_vehicle = nullptr;
}

std::shared_ptr<Vehicle> ParkingSpot::getVehicle() const
{
    return m_vehicle;
}
