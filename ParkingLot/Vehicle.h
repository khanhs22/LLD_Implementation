#ifndef Vehicle_h
#define Vehicle_h

#include <string>

enum class VehicleType {
    MOTORCYCLE,
    CAR,
    TRUCK
};

class Vehicle {
protected:
    VehicleType m_type;
    std::string m_licensePlate;

public:
    Vehicle(VehicleType type, const std::string &licensePlate);
    VehicleType getType() const;
};

#endif