#include <iostream>
#include <string>
#include <cstdlib>
#include "truck.h"
using std::string;

namespace SavitchCars{

Truck::Truck() : Vehicle(), load(0), towing(0){

}

Truck::Truck(const string& theName, const string& theManufacturer, int theCylinders, double theLoad, int theTowing) : Vehicle(theName, theManufacturer, theCylinders), load(theLoad), towing(theTowing){

}

Truck::Truck(const Truck& truckObject) : Vehicle(truckObject){
  load = truckObject.load;
  towing = truckObject.towing;
}

double Truck::getLoad() const{
  return load;
}

int Truck::getTowing() const{
  return towing;
}

Truck& Truck::operator=(const Truck& rtSide){
  Vehicle::operator=(rtSide);
  load = rtSide.load;
  towing = rtSide.towing;
  return *this;
}
}
