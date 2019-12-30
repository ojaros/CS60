#include <iostream>
#include <vector>

using namespace std;


void prime(int n){

  int newN = n/2;
  vector<int> nums;
  for (int i = 2; i <= newN; i++){
    nums.push_back(i);
  }

  bool *arr = new bool[newN-1];
  for (int i = 0; i < newN-1; i++){
    arr[i] = true;
    arr[i] = nums[i];
  }

    for (int i = 2; i < newN-1; i++){
      if (i % 2 == 0){
        arr[i] = false;
      }
    }

    for (int j = 4; j < newN-1; j += 3){
      arr[j] = false;
    }


//outputs initial vector
  for (int i = 0; i < nums.size(); i++){
    cout << nums[i] << endl;
  }

//shows which values in vector are prime by outputting as true
  for (int i = 0; i < nums.size(); i++){
    cout << arr[i] << endl;
  }


}



int main(){
  int n;
  cout << "Enter N: ";
  cin >> n;
  prime(n);


}
