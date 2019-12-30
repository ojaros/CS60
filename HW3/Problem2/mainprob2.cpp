#include <iostream>
#include <cstdlib>
#include <string>
#include "truck.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;



int main(){
  string manufacturer, name;
  double load;
  int towing, cylinders;

  SavitchCars::Truck x("Oliver", "Ford", 8, 500, 100);
  SavitchCars::Truck y;
  SavitchCars::Truck truckObject = y;
  //truckObject = x;


  cout << "Truck Object: " << "Owner name: " << truckObject.getName() << endl
  << "Manufacturer: " << truckObject.getManufacturer() << endl
  << "Cylinders: " << truckObject.getCyclinders() << endl
  << "Load Capacity: " << truckObject.getLoad() << endl
  << "Towing Capacity: " << truckObject.getTowing() << endl;

  cout << "Truck x " << "Owner name: " << x.getName() << endl
  << "Manufacturer: " << x.getManufacturer() << endl
  << "Cylinders: " << x.getCyclinders() << endl
  << "Load Capacity: " << x.getLoad() << endl
  << "Towing Capacity: " << x.getTowing() << endl;

}
