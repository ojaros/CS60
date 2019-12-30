#include <iostream>
#include <cstdlib>
#include <string>
#include "docprob3.h"
#include "personprob3.h"
#include "billing.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

//namespace SavitchPatient{
int main() {


  SavitchPatient::Doctor d1("Dan", "Dentist");
  SavitchPatient::Doctor d2("Tim", "Surgeon");
  SavitchPatient::Patient p1("Oliver", d1);
  SavitchPatient::Patient p2("Jim", d2);
  SavitchPatient::Billing b1(p1, 500);
  SavitchPatient::Billing b2(p2, 1000);

  SavitchPatient::Doctor d10("Jane", "Pediatritian");
  SavitchPatient::Doctor d20("Bobby", "Psychiatrist");
  SavitchPatient::Patient p10("Sam", d1);
  SavitchPatient::Patient p20("Kenny", d2);
  SavitchPatient::Billing b10(p1, 100);
  SavitchPatient::Billing b20(p2, 5000);

  cout << "Doctor 1: " << endl << "Name: " << d1.getDocName() << endl << "Specialty: " << d1.getDocSpecialty() << endl;
  cout << "Doctor 2: " << endl << "Name: " << d2.getDocName() << endl << "Specialty: " << d2.getDocSpecialty() << endl;
  cout << "Patient 1: " << endl << "Patients Name: " << p1.getPatientName() << endl << "Patient's Doctor: " << p1.getDocName() << endl << "Doctor's Specialty: " << p1.getDocSpecialty() << endl;
  cout << "Patient 2: " << endl << "Patients Name: " << p2.getPatientName() << endl << "Patient's Doctor: " << p2.getDocName() << endl << "Doctor's Specialty: " << p2.getDocSpecialty() << endl;
  cout << "Billing Record of Patient: " << b1.getPatientName() << endl << "Amount: " << b1.getAmntDue() << endl;
  cout << "Billing Record of Patient: " << b2.getPatientName() << endl << "Amount: " << b2.getAmntDue() << endl;

  cout << "Doctor 1: " << endl << "Name: " << d10.getDocName() << endl << "Specialty: " << d10.getDocSpecialty() << endl;
  cout << "Doctor 2: " << endl << "Name: " << d20.getDocName() << endl << "Specialty: " << d20.getDocSpecialty() << endl;
  cout << "Patient 1: " << endl << "Patients Name: " << p10.getPatientName() << endl << "Patient's Doctor: " << p10.getDocName() << endl << "Doctor's Specialty: " << p10.getDocSpecialty() << endl;
  cout << "Patient 2: " << endl << "Patients Name: " << p20.getPatientName() << endl << "Patient's Doctor: " << p20.getDocName() << endl << "Doctor's Specialty: " << p20.getDocSpecialty() << endl;
  cout << "Billing Record of Patient: " << b10.getPatientName() << endl << "Amount: " << b10.getAmntDue() << endl;
  cout << "Billing Record of Patient: " << b20.getPatientName() << endl << "Amount: " << b20.getAmntDue() << endl;

}
//}
