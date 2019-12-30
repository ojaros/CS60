#include <iostream>
#include <string>
#include<cstdlib>
#include "docprob1.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees{
  Doctor::Doctor() : SalariedEmployee(), specialty("No Specialty"), fee(0){

  }

  Doctor::Doctor(const string& theName, const string& theSsn, double theWeeklySalary, const string& theSpecialty, double theFee) : SalariedEmployee(theName, theSsn, theWeeklySalary), specialty(theSpecialty), fee(theFee){

  }

  string Doctor::getSpecialty() const{
    return specialty;
  }

  double Doctor::getFee() const{
    return fee;
  }

  void Doctor::setSpecialty(const string& newSpecialty){
    specialty = newSpecialty;
  }

  void Doctor::setFee(double newFee){
    fee = newFee;
  }


}
