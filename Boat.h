//
// Created by Jared Usher on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle {

private:
	int numberOfEngines;

public:
    Boat();

    explicit Boat(string brand, string model, string fuelType, int numberOfEngines = 1);
	
    virtual ~Boat();
	
	int getNumberOfEngines();
    void setNumberOfEngines(int engines);

    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BOAT_H