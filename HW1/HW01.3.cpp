#include <iostream>
using namespace std;

class GasPump{
private:
  double amntDisp;
  double amntcharged;
  double costPerGal;
public:
  GasPump(){
    amntDisp = 0;
    amntcharged = 0;
    costPerGal = 2.5;
  }
  void dispensed(double gallons){
    amntDisp = gallons;
  }
  void pricePaid(double gallons){
    amntcharged = gallons*costPerGal;
  }
  void print(){
    cout << "Amount dispensed: " << amntDisp << endl;
    cout << "Price paid: " << amntcharged << endl;
  }
};

int main(){
  GasPump pump;
  double gallons;
  cout << "Enter the number of gallons dispensed: " << endl;
  cin >> gallons;

  pump.dispensed(gallons);
  pump.pricePaid(gallons);

  pump.print();
  return 0;
}
