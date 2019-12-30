#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "rectangle.h"
#include <iostream>
using namespace std;


class Triangle : public Figure{
private:
  int base, height;
public:
  void erase();
  void draw();
};

#endif
