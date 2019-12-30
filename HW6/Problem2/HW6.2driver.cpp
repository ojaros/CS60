#include <iostream>
#include "grid.h"
#include "organism.h"
#include "ant.h"
#include "doodlebug.h"
using namespace std;



int main(){

Grid gr;
string s;


int numAnts = 0;
int numDbugs = 0;
for(int i = 1; i <= 100; i++){
  int rHor = rand() % 20;
  int rVer = rand() % 20;
  if(gr.getIndex(rHor, rVer) == '\0'){
    numAnts++;
    Ant *ant = new Ant(&gr, rHor, rVer);
  }
}

for(int i = 1; i <= 5; i++){
  int rHor = rand() % 20;
  int rVer = rand() % 20;
  if(gr.getIndex(rHor, rVer) == '\0'){
    numDbugs++;
    Doodlebug *dbug = new Doodlebug(&gr, rHor, rVer);
  }
}

while (true){
  gr.print();
  gr.timeStep();
  cout << "Enter" << endl;
  getline(cin, s);
}
return 0;
}
