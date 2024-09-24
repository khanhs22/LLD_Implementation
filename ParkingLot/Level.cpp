#include "Level.h"

Level::Level(int floor, int numberMotorCycle, int numberCar, int numberTruck)
    : m_floor(floor)
{
    int i = 0;

    for(i = 1; i <= numberMotorCycle; ++i)
    {
        m_spots.push_back(new ParkingSpot(i, VehicleType::MOTORCYCLE));
    }
    for(i = numberMotorCycle + 1; i <= numberMotorCycle + numberCar; ++i)
    {
        m_spots.push_back(new ParkingSpot(i, VehicleType::CAR));
    }
    for(i = numberMotorCycle + numberCar + 1; i <= numberMotorCycle + numberCar + numberTruck; ++i)
    {
        m_spots.push_back(new ParkingSpot(i, VehicleType::TRUCK));
    }
}

int Level::getFloor() const
{
    return m_floor;
}

bool Level::parkVehicle(std::shared_ptr<Vehicle> vehicle)
{
    for(ParkingSpot* spot : m_spots) {
        if(spot->isAvailable() && spot->getType() == vehicle->getType()) {
            spot->parkVehicle(vehicle);
            return true;
        }
    }

    return false;
}

bool Level::unparkVehicle(std::shared_ptr<Vehicle> vehicle)
{
    for(ParkingSpot* spot : m_spots) {
        if(spot->getVehicle() == vehicle) {
            spot->unparkVehicle();
            return true;
        }
    }

    return false;
}

int Level::availableSpots(VehicleType type) const
{
    int availableSpot = 0;

    for(ParkingSpot* spot : m_spots) {
        if(spot->isAvailable() && spot->getType() == type) {
            availableSpot++;
        }
    };

    return availableSpot;
}
