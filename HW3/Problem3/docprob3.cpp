#include <iostream>
#include <cstdlib>
#include <string>
#include "docprob3.h"
using std::string;
namespace SavitchPatient{
  Doctor::Doctor() : docName("no name"), docSpecialty("no specialty"){

  }

  Doctor::Doctor(const string& theDocName, const string& theDocSpecialty){
    docName = theDocName;
    docSpecialty = theDocSpecialty;
  }

  Doctor::Doctor(const Doctor& theDoctor){
    docName = theDoctor.docName;
    docSpecialty = theDoctor.docSpecialty;
  }

  string Doctor::getDocName() const{
    return docName;
  }

  string Doctor::getDocSpecialty() const{
    return docSpecialty;
  }

  Doctor& Doctor::operator=(const Doctor& rtSide){
    docName = rtSide.docName;
    docSpecialty = rtSide.docSpecialty;
    return *this;
  }

}
