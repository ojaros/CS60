#include <iostream>
#include "grid.h"
#include "organism.h"
using namespace std;


Organism::Organism(){
  g = '\0';
  hor = 0;
  ver = 0;
  moved = false;
}


Organism::Organism(Grid *theGrid, int theHor, int theVer){
  this->g = theGrid;
  this->hor = theHor;
  this->ver = theVer;
  grid->setIndex(hor, ver, this);
  moved = false;
}

Organism::~Organism(){

}
