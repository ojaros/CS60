#ifndef ANT_H
#define ANT_H
#include <iostream>
#include "organism.h"
#include "grid.h"
#include "doodlebug.h"
using namespace std;

class Ant : public Organism{
  friend class Grid;
private:
  int timeStep;
public:
  Ant();
  Ant(Grid* g, int hor, int ver);

  void move();
  void breed();
  int getType();
  bool starve();
};
#endif
