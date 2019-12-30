#ifndef ORGANISM_H
#define ORGANISM_H
#include <iostream>
using namespace std;

class Organism{
private:
  const int size = 20;
  char grid[20][20];
  const int initialAnts = 100;
  const int initialDoodlebugs = 5;
public:
  Organism(){
    for(int hor = 0; hor < size; hor++){
      for(int ver = 0; ver < size; ver++){
        grid[hor][ver] = '\0';
      }
    }
  }

  void print(){
    for(int hor = 0; hor < 20; hor++){
      for(int ver = 0; ver < 20; ver++){
        cout << grid[hor][ver] << " ";
      }
      cout << endl;
    }
  }

  virtual int move(){

  }
};

#endif
