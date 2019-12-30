#include <iostream>
using namespace std;

int fibonacci(int n){
  if (n < 2){
    return 1;
  }
  else {
  return (fibonacci(n-2) + fibonacci(n-1));
}
}


int main(){
  int i;
  cout << "Enter nth Fibonacci number: " << endl;
  cin >> i;

  cout << fibonacci(i) << endl;
}
