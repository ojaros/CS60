#include <iostream>
#include <ctime>
using namespace std;


int fibonacciI(int n){

  int f[n+2];

  f[0] = 1;
  f[1] = 1;

  for (int i = 2; i <= n; i++){
    f[i] = f[i-1] + f[i-2];
  }
  return f[n];
}

int fibonacciR(int n){
  if (n < 2){
    return 1;
  }
  else {
  return (fibonacciR(n-2) + fibonacciR(n-1));
}
}





int main(){


  int start_I = clock();
  for(int i = 1; i <= 15; i = i+2){
    cout << fibonacciI(i) << endl;
  }
  int stop_I = clock();
  cout << "time: " << (stop_I-start_I)/double(CLOCKS_PER_SEC)*1000 << endl;
//iterative takes slightly longer than recursive to funb


  int start_R = clock();
  int fibR[15];
  for (int i = 0; i <= 15; i++){
    fibR[i] = fibonacciR(i);
  }
  int stop_R = clock();
  cout << "time: " << (stop_R-start_R)/double(CLOCKS_PER_SEC)*1000 << endl;
//this solution takes much shorter to run, iterative still runs faster

}
