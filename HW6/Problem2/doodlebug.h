#ifndef DOODLEBUG_H
#define DOODLEBUG_H
#include <iostream>
#include "ant.h"
#include "organism.h"
#include "grid.h"
using namespace std;

class Doodlebug : public Organism{
  friend class Grid;
private:
  int starveT;
  int timeStep;
public:
  Doodlebug();
  Doodlebug(Grid *g, int hor, int ver);
  void move();
  void breed();
  int getType();
  bool starve();

};

#endif
