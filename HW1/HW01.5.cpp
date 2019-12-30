#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> vector;
  int num;
  int count = 0;

  cout << "Enter number of people: " << endl;
  cin >> num;

  for(int i=1; i<num; i++){
    vector.push_back(i);
    cout << vector[i-1] << endl;
  }
  do{
    for (int i=0; i<vector.size(); i++){
      count += 1;
      if(count == 3){
        cout << vector[i] << "is out " << endl;
        vector.erase(vector.begin()+i);
        count = 0;
        i--;
      }
    }
  }
  while(vector.size()>1);
  cout << vector[0] << "Marrys Eve" << endl;
  cin.get();
  return 0;
}
