#include "ParkingLot.h"
#include "MotorCycle.h"
#include "Car.h"
#include "Truck.h"

int main() {

    ParkingLot* parkingLot = new ParkingLot();

    parkingLot->addLevel(new Level(1, 20, 10, 5));
    parkingLot->addLevel(new Level(2, 10, 5, 2));

    auto motor1 = std::make_shared<MotorCycle>("motor1");
    auto motor2 = std::make_shared<MotorCycle>("motor2");
    auto car1 = std::make_shared<Car>("car1");
    auto car2 = std::make_shared<Car>("car2");
    auto truck1 = std::make_shared<Truck>("truck1");

    parkingLot->parkVehicle(motor1);
    parkingLot->parkVehicle(motor2);
    parkingLot->parkVehicle(car1);
    parkingLot->parkVehicle(car2);
    parkingLot->parkVehicle(truck1);

    parkingLot->displayAvailableSpots();

    parkingLot->unparkVehicle(motor1);

    parkingLot->displayAvailableSpots();
    
    return 0;
}