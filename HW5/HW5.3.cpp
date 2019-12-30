#include <iostream>
using namespace std;



void tower(int n, int current, int last, int temp){
  if (n==1){
    cout << "Disk: " << n << " moves from " << current << " to " << last << endl;
  }
  else {
    tower(n-1, current, temp, last);
    cout << "Disk: " << n << " moves from " << current << " to " << last << endl;
    tower(n-1, temp, last, current);
  }
}


int main(){
  //int n = 4;
  int n = 3;
  tower(n, 1, 2, 3);
}
