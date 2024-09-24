#ifndef ParkingLot_h
#define ParkingLot_h

#include "Level.h"
#include <iostream>

class ParkingLot
{
private:
    std::vector<Level*> m_levels;

public:
    ParkingLot();
    
    void addLevel(Level* level);
    bool parkVehicle(std::shared_ptr<Vehicle> vehicle);
    bool unparkVehicle(std::shared_ptr<Vehicle> vehicle);
    void displayAvailableSpots() const;
};

#endif