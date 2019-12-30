#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
#include "salariedemployee.h"
using std::string;

namespace SavitchEmployees{

class Doctor : public SalariedEmployee{
private:
  string specialty;
  double fee;
public:
  Doctor();
  Doctor(const string& theName, const string& theSsn, double theWeeklySalary, const string& theSpecialty, double theFee);
  string getSpecialty() const;
  double getFee() const;
  void setSpecialty(const string& newSpecialty);
  void setFee(double newFee);
};

}
#endif
