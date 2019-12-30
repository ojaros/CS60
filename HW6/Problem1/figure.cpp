#include "figure.h"
//#include "figurevirtual.h"
#include <iostream>
using namespace std;


void Figure::erase(){
  cout << "Erase function has been called in figure class" << endl;
}

void Figure::draw(){
  cout << "Draw function has been called in figure class" << endl;
}

void Figure::center(){
  cout << "Calling Center function in figure class" << endl;
  erase();
  draw();
}
