#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include "vehicle.h"
using std::string;

namespace SavitchCars{

class Truck : public Vehicle{
private:
  double load;
  int towing;
public:
  Truck();
  Truck(const string& theName, const string& theManufacturer, int theCylinders, double theLoad, int theTowing);
  Truck(const Truck& truckObject);
  double getLoad() const;
  int getTowing() const;
  Truck& operator=(const Truck& rtside);
};
}

#endif
