#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using std::string;

namespace SavitchCars{
class Person{
public:
  Person();
  Person(const string& theName);
  Person(const Person& theObject);
  string getName() const;
  Person& operator=(const Person& rtSide);
  friend std::istream& operator >> (std::istream& inStream, Person& personObject);
  friend std::ostream& operator << (std::ostream& outStream, const Person& personObject);
private:
  string name;
};

}

#endif
