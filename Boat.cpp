//
// Created by Jared on 10/4/19.
//

#include "Boat.h"
#include <cstdlib>

Boat::Boat() {
    setBrand("Custom");
    setModel("Custom");
	numberOfEngines = 1;
}

Boat::Boat(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Boat::~Boat() = default;

void Boat::setNumberOfEngines(int engines) {
    numberOfEngines = engines;
}

int Boat::getNumberOfEngines() {
	return numberOfEngines;
}

double Boat::mileageEstimate(double time) {
	
    double mileage = ((rand()%100)+1) * time;
	
	// Get 2% more mileage for each engine if Diesel
    if (fuelType == "Diesel") 
	{
        mileage = mileage*(1+((2*numberOfEngines)/100));
    }
	// Get 4% more mileage for each engine if Gasoline
	else if (fuelType == "Gasoline")
	{
		mileage = mileage = mileage*(1+((4*numberOfEngines)/100));
	}
	
    return mileage;
}

string Boat::toString() {
    return "-> Boat\n" + PoweredVehicle::toString();
}