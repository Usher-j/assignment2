//
// Created by Jared Usher on 10/4/19.
//

#include "Jet.h"
#include <math.h>
#include <cstdlib>

Jet::Jet() {
    setBrand("Custom");
    setModel("Custom");
	setNumberOfEngines(1);
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

// Set Number of Engines
int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

// Get Number of Engines
void Jet::setNumberOfEngines(int engines) {
    numberOfEngines = engines;

}

// Mileage Calculation
double Jet::mileageEstimate(double time) {
	
	double mileage = floor(((rand()%100)+1)) * time;
  
    if (fuelType == "Rocket" && numberOfEngines >= 2) 
	{
        mileage = mileage*(1+((5.5*numberOfEngines)/100));
    }

    return mileage;
}

string Jet::toString() {
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " 
  + to_string(getNumberOfEngines());
}