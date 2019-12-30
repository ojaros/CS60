#ifndef DOCPROB3_H
#define DOCPROB3_H

#include <string>
#include <iostream>
//#include "personprob3.h"
using std::string;

namespace SavitchPatient{
  class Doctor{
  private:
    string docName;
    string docSpecialty;
  public:
    Doctor();
    Doctor(const string& theDocName, const string& theDocSpecialty);
    Doctor(const Doctor& theDoctor);
    string getDocName() const;
    string getDocSpecialty() const;
    Doctor& operator=(const Doctor& rtSide);
  };
}

#endif
