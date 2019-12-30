#include <iostream>
#include <cstdlib>
#include <string>
#include "billing.h"
using std::string;
namespace SavitchPatient{

  Billing::Billing(){
    amntDue = 0;
  }

  Billing::Billing(Patient pat, double theAmntDue){
    p = pat;
    amntDue = theAmntDue;
  }

  Billing::Billing(const Billing& theBilling){
    p = theBilling.p;
    amntDue = theBilling.amntDue;
  }

  Billing& Billing::operator=(const Billing& rtSide){
    p = rtSide.p;
    amntDue = rtSide.amntDue;
    return *this;
  }

  double Billing::getAmntDue() const{
    return amntDue;
  }

  string Billing::getPatientName() const{
    return p.getPatientName();
  }

  string Billing::getDocName() const{
    return p.getDocName();
  }

  string Billing::getDocSpecialty() const{
    return p.getDocSpecialty();
  }




}
