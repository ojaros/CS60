#ifndef PATIENT_H
#define PATIENT_H

#include "personprob3.h"
#include "docprob3.h"
#include <iostream>
#include <cstdlib>
#include <string>
using std::string;

namespace SavitchPatient{

class Patient : public Person {
private:
  Doctor d1;
public:
  Patient();
  Patient(const string& patName, Doctor docObj);
  Patient(const Patient& thePatient);
  Patient& operator=(const Patient& rtSide);
  string getPatientName() const;
  string getDocName() const;
  string getDocSpecialty() const;
};


}
#endif
