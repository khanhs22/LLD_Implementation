#include "ParkingLot.h"

ParkingLot::ParkingLot()
{
}

void ParkingLot::addLevel(Level* level)
{
    m_levels.push_back(level);
}

bool ParkingLot::parkVehicle(std::shared_ptr<Vehicle> vehicle)
{
    for(Level* level : m_levels) {
        if(level->parkVehicle(vehicle)) {
            std::cout << "Parked Successfull!" << std::endl;
            return true;
        }
    }
    return false;
}

bool ParkingLot::unparkVehicle(std::shared_ptr<Vehicle> vehicle)
{
    for(Level* level : m_levels) {
        if(level->unparkVehicle(vehicle)) {
            std::cout << "Unparked Successfull!" << std::endl;
            return true;
        }
    }
    return false;
}

void ParkingLot::displayAvailableSpots() const
{
    int i = 1;
    for(Level* level : m_levels) {
        std::cout << "Floor " << level->getFloor() << ":" << std::endl;
        std::cout << "\t" << level->availableSpots(VehicleType::MOTORCYCLE) << " slots for motorcycle" << std::endl;
        std::cout << "\t" << level->availableSpots(VehicleType::CAR) << " slots for car" << std::endl;
        std::cout << "\t" << level->availableSpots(VehicleType::TRUCK) << " slots for truck" << std::endl;
    }
}
