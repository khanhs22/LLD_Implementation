#ifndef ParkingSpot_h
#define ParkingSpot_h

#include "Vehicle.h"
#include <memory>

class ParkingSpot
{
private:
    int m_number;
    VehicleType m_spotType;
    std::shared_ptr<Vehicle> m_vehicle;
public:
    ParkingSpot(int number, VehicleType type);

    bool isAvailable() const;
    VehicleType getType() const;
    int getNumber() const;
    void parkVehicle(std::shared_ptr<Vehicle> vehicle);
    void unparkVehicle();
    std::shared_ptr<Vehicle> getVehicle() const;
};

#endif