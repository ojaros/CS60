#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
using namespace std;


class Figure{
private:
public:
  void erase();
  virtual void draw();
  virtual void center();
};


#endif
