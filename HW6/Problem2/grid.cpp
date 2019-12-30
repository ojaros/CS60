#include <iostream>
#include "grid.h"
#include "organism.h"
#include "ant.h"
#include "doodlebug.h"
using namespace std;



Grid::Grid(){
  for(int hor = 0; hor < 20; hor++){
    for(int ver = 0; ver < 20; ver++){
      grid[hor][ver] == '\0';
    }
  }
}

Grid::~Grid(){
  for(int hor = 0; hor < 20; hor++){
    for(int ver = 0; ver < 20; ver++){
      if(grid[hor][ver] == '\0'){
        delete grid[hor][ver];
      }
    }
  }
}

void Grid::setIndex(int horIndex, int verIndex, Organism* obj){
  grid[horIndex][verIndex] = obj;
}

Organism* Grid::getIndex(int horIndex, int verIndex){
  {
    return grid[horIndex][verIndex];
  }
}

void Grid::print(){
  for(int hor = 0; hor < 20; hor++){
    for(int ver = 0; ver < 20; ver++){
      if(grid[hor][ver] == '\0'){
        cout << " ";
      }
      else if (grid[hor][ver]->getType() == ant){
        cout << "O";
      }
      else {
        cout << "X";
      }
    }
    cout << endl;
  }
}

void Grid::timeStep(){
  for(int hor = 0; hor < 20; hor++){
    for (int ver = 0; ver < 20; ver++){
      grid[hor][ver]->moved == false;
    }
  }
  for(int hor = 0; hor < 20; hor++){
    for (int ver = 0; ver < 20; ver++){
      if (grid[hor][ver]->getType() == doodlebug){
        if(grid[hor][ver]->moved == false){
          grid[hor][ver]->moved == true;
        }
      }
    }
  }
  for(int hor = 0; hor < 20; hor++){
    for (int ver = 0; ver < 20; ver++){
      if (grid[hor][ver]->getType() == ant){
        if(grid[hor][ver]->moved == false){
          grid[hor][ver]->moved == true;
        }
      }
    }
  }
  for(int hor = 0; hor < 20; hor++){
    for (int ver = 0; ver < 20; ver++){
      if (grid[hor][ver]->getType() == doodlebug){
        if(grid[hor][ver]->starve()){
          delete grid[hor][ver];
          grid[hor][ver] == '\0';
        }
      }
    }
  }
  for(int hor = 0; hor < 20; hor++){
    for (int ver = 0; ver < 20; ver++){
        if(grid[hor][ver]->moved == true){
          grid[hor][ver]->breed();
        }
      }
    }




}
