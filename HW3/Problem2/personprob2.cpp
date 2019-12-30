#include <iostream>
#include <string>
#include <cstdlib>
#include "personprob2.h"
using std::string;
using std::cout;
using std::cin;

namespace SavitchCars{

Person::Person() : name("No name"){

}

Person::Person(const string& theName) : name(theName){

}

Person::Person(const Person& theObject){
  name = theObject.name;
}

string Person::getName() const{
  return name;
}

Person& Person::operator=(const Person& rtSide){
  name = rtSide.name;
  return *this;
}

std::istream& operator >> (std::istream& inStream, Person& personObject){
  string name;
  getline(inStream, name);
  return inStream;
}

std::ostream& operator << (std::ostream& outStream, const Person& personObject){
  outStream << personObject.name;
  return outStream;
}
}
