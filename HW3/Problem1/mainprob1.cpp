#include <iostream>
#include <string>
#include<cstdlib>
#include "docprob1.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;


int main(){
  string name, ssn, specialty;
  double salary, fee;

  SavitchEmployees::Doctor x;
  SavitchEmployees::Doctor y("Oliver", "123-45-6789", 1000, "Surgeon", 500);

  SavitchEmployees::Doctor d1;
  std::cout << "Enter Doctors name: " << std::endl;
  std::cin >> name;
  d1.setName(name);
  std::cout << "Enter Doctors ssn: " << std::endl;
  std::cin >> ssn;
  d1.setSsn(ssn);
  std::cout << "Enter Doctors salary: " << std::endl;
  std::cin >> salary;
  d1.setSalary(salary);
  std::cout << "Enter Doctors specialty: " << std::endl;
  std::cin >> specialty;
  d1.setSpecialty(specialty);
  std::cout << "Enter Doctors fee: " << std::endl;
  std::cin >> fee;
  d1.setFee(fee);

  //std::cout << "Name is: " << y.getName() << std::endl;

  std::cout << "Doctors name is: " << d1.getName() << std::endl;
  std::cout << "Doctors ssn is: " << d1.getSsn() << std::endl;
  std::cout << "Doctors salary is: " << d1.getSalary() << std::endl;
  std::cout << "Doctors specialty is: " << d1.getSpecialty() << std::endl;
  std::cout << "Doctors fee is: " << d1.getFee() << std::endl;
  d1.printCheck();



}
