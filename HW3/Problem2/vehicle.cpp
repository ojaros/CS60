#include <iostream>
#include <string>
#include <cstdlib>
#include "vehicle.h"
using std::string;

namespace SavitchCars{

Vehicle::Vehicle() : Person(), manufacturer("No manufacturer"), cylinders(0){

}

Vehicle::Vehicle(const string& theName, const string& theManufacturer, int theCylinders) : Person(theName), manufacturer(theManufacturer), cylinders(theCylinders){

}

Vehicle::Vehicle(const Vehicle& vehicleObject) : Person(vehicleObject){
  manufacturer = vehicleObject.manufacturer;
  cylinders = vehicleObject.cylinders;
}

string Vehicle::getManufacturer() const{
  return manufacturer;
}

int Vehicle::getCyclinders() const{
  return cylinders;
}

Vehicle& Vehicle::operator=(const Vehicle& rtSide){
  Person::operator=(rtSide);
  manufacturer = rtSide.manufacturer;
  cylinders = rtSide.cylinders;
  return *this;
}
}
