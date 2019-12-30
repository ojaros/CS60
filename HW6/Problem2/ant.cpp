#include <iostream>
#include "ant.h"
using namespace std;


Ant::Ant() : Organism(){

}
Ant::Ant(Grid* g, int hor, int ver) : Organism(g, hor, ver){

}

void Ant::move(){
  int r = rand()%4;

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
      case 3:
      if ((ver > 0) && (g->getIndex(hor, ver - 1) == '\0')){
        g->setIndex(hor, ver - 1, g->getIndex(hor, ver));
        g->setIndex(hor, ver) == '\0';
        ver--;
      }
      break;
    }
  }

  int Ant::getType(){
    return ant;
  }

  void Ant::breed(){
    timeStep++;
    if (timeStep = 3){
      timeStep = 0; // hor private member in organism


      
      if((hor < 19) && g->getIndex(hor + 1, ver) == '\0'){
        Ant *n = new Ant(g, hor + 1, ver);
      }
      else if((ver > 0) && g->getIndex(hor, ver - 1) == '\0'){
        Ant *n = new Ant(g, hor, ver - 1);
      }
      else if((hor > 0) && g->getIndex(hor - 1, ver) == '\0'){
        Ant *n = new Ant(g, hor - 1, ver);
      }
      else if((ver < 19) && g->getIndex(hor, ver + 1) == '\0'){
        Ant *n = new Ant(g, hor, ver + 1);
      }
    }
  }

  bool Ant::starve(){
    return false;
  }
