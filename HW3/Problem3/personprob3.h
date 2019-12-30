#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using std::string;

namespace SavitchPatient{
class Person{
private:
  string name;
public:
  Person();
  Person(const string& theName);
  Person(const Person& theObject);
  string getName() const;
  Person& operator=(const Person& rtSide);
  friend std::istream& operator >> (std::istream& inStream, Person& personObject);
  friend std::ostream& operator << (std::ostream& outStream, const Person& personObject);
};

}

#endif
