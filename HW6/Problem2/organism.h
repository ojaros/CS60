#ifndef ORGANISM_H
#define ORGANISM_H
#include <iostream>
#include "grid.h"
using namespace std;

class Organism{
  friend class Grid;
private:
  int hor;
  int ver;
  Grid *g;
  //int timeStep;
  bool moved;

public:
  Organism();
//may need to make Grid*grid
  Organism(Grid *theGrid, int theHor, int theVer);

  ~Organism();
  virtual void move();
  virtual void breed();
  virtual int getType();

  virtual bool starve();



};

#endif
