//
// Created by Jared Usher on 10/4/19.
//

#include "Skateboard.h"
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage;
    
	if (time > 25 && time < 250)
	{
		mileage = ((rand()%5+1)/10) * time;
		
		mileage = mileage + ((rand()%3+1/3)*time);
	}
	else 
	{
		mileage = ((rand()%5+1)/10) * time;
	}
	
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}