#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "triangle.h"
using std::cout;

int main(){
  Triangle tri;
  tri.draw();
  cout << endl << "Derived class Triangle object calling center()" << endl;
  tri.center();

  Rectangle rect;
  rect.draw();
  cout << endl << "Derived class Rectangle object calling center()" << endl;
  rect.center();

  return 0;
}
