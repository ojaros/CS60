#ifndef BILLING_H
#define BILLING_H

#include <iostream>
#include <cstdlib>
#include <string>
#include "patient.h"
using std::string;

namespace SavitchPatient{
class Billing{
private:
  double amntDue;
  Patient p;
public:
  Billing();
  Billing(Patient pat, double theAmntDue);
  Billing(const Billing& theBilling);
  Billing& operator=(const Billing& rtSide);
  double getAmntDue() const;
  string getPatientName() const;
  string getDocName() const;
  string getDocSpecialty() const;
};


}

#endif
