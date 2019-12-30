#ifndef DOCPROB5_H
#define DOCPROB5_H

#include <string>
#include <iostream>
#include "person.h"
using std::string;

namespace SavitchPatient{
  class Doctor{
  private:
    string docName;
    string docSpecialty;
  public:
    Doctor();
    Doctor(const string& docName, const string& docSpecialty);
    Doctor(const Doctor& theDoctor);
    string getDocName() const;
    string getDocSpecialty() const;
    Doctor& operator=(const Doctor& rtSide);

  };
}
