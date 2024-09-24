#ifndef Level_h
#define Level_h

#include "ParkingSpot.h"
#include <vector>

class Level {
private:
    int m_floor;
    std::vector<ParkingSpot*> m_spots;

public:
    Level(int floor, int numberMotorCycle, int numberCar, int numberTruck);

    int getFloor() const;
    bool parkVehicle(std::shared_ptr<Vehicle> vehicle);
    bool unparkVehicle(std::shared_ptr<Vehicle> vehicle);
    int availableSpots(VehicleType type) const;
};

#endif