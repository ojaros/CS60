#include <iostream>
using namespace std;




int factorial(int f){
  if (f == 0){
    return 1;
  }
  return f * factorial(f-1);
}


int c(int n, int r){
  return (factorial(n) / (factorial(r)*factorial(n-r)) );
}


int main(){
  int n = 4;
  int r = 2;
  cout << factorial(n) << endl;
  cout << factorial(r) << endl;
  cout << c(n, r) << endl;

  //cout << factorial(7) << endl;
  //cout << c(9, 5) << endl;
}
