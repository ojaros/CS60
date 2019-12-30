#include "patient.h"
#include <iostream>
#include <cstdlib>
#include <string>
using std::string;
namespace SavitchPatient{
  Patient::Patient() : Person(){

  }

  Patient::Patient(const string& patName, Doctor docObj) : Person(patName){
    d1 = docObj;
  }

  Patient::Patient(const Patient& thePatient) : Person(thePatient){
    d1 = thePatient.d1;
  }

  Patient& Patient::operator=(const Patient& rtSide){
    Person::operator=(rtSide);
    d1 = rtSide.d1;
    return *this;
  }

  string Patient::getPatientName() const{
    return getName();
  }

  string Patient::getDocName() const{
    return d1.getDocName();
  }

  string Patient::getDocSpecialty() const{
    return d1.getDocSpecialty();
  }




}
