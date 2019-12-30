#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include "personprob2.h"
using std::string;

namespace SavitchCars{

class Vehicle : public Person{
private:
  string manufacturer;
  int cylinders;
public:
  Vehicle();
  Vehicle(const string& theName, const string& theManufacturer, int theCylinders);
  Vehicle(const Vehicle& vehicleObject);
  string getManufacturer() const;
  int getCyclinders() const;
  Vehicle& operator=(const Vehicle& rtside);
};

}
#endif
