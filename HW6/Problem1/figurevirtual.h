#ifndef FIGUREVIRUAL_H
#define FIGUREVIRTUL_H

#include <iostream>
using namespace std;


class Figure{
private:
public:
  virtual void erase();
  virtual void draw();
  virtual void center();
};


#endif
