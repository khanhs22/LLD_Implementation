#include "Vehicle.h"

Vehicle::Vehicle(VehicleType type, const std::string &licensePlate)
    :m_type(type), m_licensePlate(licensePlate)
{
}

VehicleType Vehicle::getType() const
{
    return m_type;
}
