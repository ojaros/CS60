#ifndef WORLD_H
#define WORLD_H
#include "organism.h"
#include "ant.h"
#include "doodlebug.h"
#include <iostream>
using namespace std;

class Grid{
  friend class Organism;
  friend class Doodlebug;
  friend class Ant;
private:
  Organism* grid[20][20];
public:
  Grid();
  ~Grid();

  void setIndex(int horIndex, int verIndex, Organism* obj);

  Organism* getIndex(int horIndex, int verIndex);

  void print();
  void timeStep();
/*
  void setGrid(){
    for(int hor = 0; hor < 20; hor++){
      for(int ver = 0; ver < 20; ver++){
        grid[hor][ver] = '\0';
      }
    }
  }

  void addOrganisms(){
    for(int i = 1; i <= 5; i++){
      int rHor = rand() % 20;
      int rVer = rand() % 20;
      if(grid[hor][ver] == '\0'){
      grid[rHor][rVer] = 'X';

    }
    }
    for(int i = 1; i <= 100; i++){
      int rHor = rand() % 20;
      int rVer = rand() % 20;
      if(grid[hor][ver] == '\0'){
      grid[rHor][rVer] = 'O';
    }
    }
  }
  */



};

#endif
