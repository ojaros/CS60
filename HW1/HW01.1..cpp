#include <iostream>
using namespace std;

class CounterType{
private:
  int count;
public:
  CounterType(){
    count=0;
  }
  CounterType(int counter){
    count=counter;
  }
  void incCount(){
    count++;
    //return 0;
  }
  void decCount(){
    if (count > 0){
    count--;
  }
    else{
      cout << "Counter can not be negative" << endl;
    }
  }
  int currentCount(){
    return count;
  }
  void displayCount(){
    cout << "Current count: " << currentCount() << endl;
  }
};

int main(){
  CounterType count1;
  cout << "The value of count1 is: " <<  count1.currentCount() << endl;

  count1.incCount();
  cout << "After increasing, value is: " << count1.currentCount() << endl;

  count1.decCount();
  cout << "After decreasing, value is: " << count1.currentCount() << endl;

}
