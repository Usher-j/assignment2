//
// Created by Jared on 10/4/19.
//

#include "Jet.h"
#include <cstdlib>

Jet::Jet() {
    setBrand("Custom");
    setModel("Custom");
	numberOfEngines = 1;
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

// Set Number of Engines
void Jet::setNumberOfEngines(int engines) {
    numberOfEngines = engines;
}

// Get Number of Engines
int Jet::getNumberOfEngines() {
	return numberOfEngines;
}

// Mileage Calculation
double Jet::mileageEstimate(double time) {
    double mileage = ((rand()%100)+1) * time;
    if (fuelType == "Rocket" && numberOfEngines >= 2) {
        mileage = mileage*(1+((5.5*numberOfEngines)/100));
    }
    return mileage;
}

// Modified toString For Jet
string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber Of Engines: " +
           getNumberOfEngines();
}