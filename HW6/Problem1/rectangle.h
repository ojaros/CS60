#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure.h"
//#include "figurevirtual.h"
#include <iostream>
using namespace std;


class Rectangle : public Figure{
private:
  int height, width, centerPt;
public:
  void erase();
  void draw();
};

#endif
