//
// Created by Jared Usher on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle {

private:

public:
    Boat();

    explicit Boat(string brand, string model, string fuelType);
	
    virtual ~Boat();

    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BOAT_H