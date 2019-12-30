#include <iostream>
#include "doodlebug.h"
using namespace std;


Doodlebug::Doodlebug() : Organism(){
  starveT = 0;
}

Doodlebug::Doodlebug(Grid *g, int hor, int ver) : Organism(g, hor, ver){
  starveT = 0;
}

void Doodlebug::move(){
  if(((hor < 19) && (g->getIndex(hor + 1, ver) == '\0') && (g->getIndex(hor + 1) == ant))){
    delete (g->grid[hor + 1][ver]);
    g->grid[hor + 1][ver] = this;
    g->setIndex(hor, ver, '\0');
    starve = 0;
    hor++;
}
  else if(((ver < 19) && (g->getIndex(hor, ver + 1) == '\0') && (g->getIndex(ver + 1) == ant))){
    delete (g->grid[hor][ver + 1]);
    g->grid[hor][ver + 1] = this;
    g->setIndex(hor, ver, '\0');
    starve = 0;
    ver++;
  }
  else if(((hor > 0) && (g->getIndex(hor - 1, ver) == '\0') && (g->getIndex(hor - 1) == ant))){
    delete (g->grid[hor - 1][ver]);
    g->grid[hor - 1][ver] = this;
    g->setIndex(hor, ver, '\0');
    starve = 0;
    hor--;
  }
  else if(((ver > 0) && (g->getIndex(hor, ver - 1) == '\0') && (g->getIndex(ver - 1) == ant))){
    delete (g->grid[hor][ver - 1]);
    g->grid[hor][ver - 1] = this;
    g->setIndex(hor, ver, '\0');
    starve = 0;
    ver--;
  }
  else {
  int r = rand()%4

    switch(r){
      case 0:
      if ((hor < 19) && (g->getIndex(hor + 1, ver) == '\0')){
        g->setIndex(hor + 1, ver, g->getIndex(hor, ver));
        g->setIndex(hor, ver) == '\0';
        hor++;
      }
      break;
      case 1:
      if ((ver < 19) && (g->getIndex(hor, ver + 1) == '\0')){
        g->setIndex(hor, ver + 1, g->getIndex(hor, ver));
        g->setIndex(hor, ver) == '\0';
        ver++;
      }
      break;
      case 2:
      if ((hor > 0) && (g->getIndex(hor - 1, ver) == '\0')){
        g->setIndex(hor - 1, ver, g->getIndex(hor, ver));
        g->setIndex(hor, ver) == '\0';
        hor--;
      }
      break;
      case 1:
      if ((ver > 0) && (g->getIndex(hor, ver - 1) == '\0')){
        g->setIndex(hor, ver - 1, g->getIndex(hor, ver));
        g->setIndex(hor, ver) == '\0';
        ver--;
      }
      break;
    }
    starve++;
  }
}

void Doodlebug::breed(){
  timeStep++
  if(timeStep = 8){
    timeStep = 0;
    if(g->getIndex(hor + 1, ver) == '\0'){
      Dooglebug *new = new Doodlebug(g, hor + 1, ver);
    }
    else if(g->getIndex(hor, ver - 1) == '\0'){
      Dooglebug *new = new Doodlebug(g, hor, ver - 1);
    }
    else if(g->getIndex(hor - 1, ver) == '\0'){
      Dooglebug *new = new Doodlebug(g, hor - 1, ver);
    }
    (g->getIndex(hor, ver + 1) == '\0'){
      Dooglebug *new = new Doodlebug(g, hor, ver + 1);
    }
  }
  }


int Doodlebug::getType(){
  return dbug;
}

bool Doodlebug::starve(){
  if(starveT > 3){
    return true;
  }
  else {
    return false;
  }
}
