#include <iostream>
using namespace std;

class Month{
private:
  int month;
public:
  Month(char first, char second, char third){
    if ((first=='j')&&(second=='a')&&(third=='n')){
      month=1;
    }
    else if ((first=='f')&&(second=='e')&&(third=='b')){
          month=2;
    }
    else if ((first=='m')&&(second=='a')&&(third=='r')){
              month=3;
    }
    else if ((first=='a')&&(second=='p')&&(third=='r')){
                  month=4;
    }
    else if ((first=='m')&&(second=='a')&&(third=='y')){
                      month=5;
    }
    else if ((first=='j')&&(second=='u')&&(third=='n')){
                      month=6;
    }
    else if ((first=='j')&&(second=='u')&&(third=='l')){
                      month=7;
    }
    else if ((first=='a')&&(second=='u')&&(third=='g')){
                      month=8;
    }
    else if ((first=='s')&&(second=='e')&&(third=='p')){
                      month=9;
    }
    else if ((first=='o')&&(second=='c')&&(third=='t')){
                      month=10;
    }
    else if ((first=='n')&&(second=='o')&&(third=='v')){
                      month=11;
    }
    else if ((first=='d')&&(second=='e')&&(third=='c')){
                      month=12;
    }
  }
  Month(int monthNum){
    month = monthNum;
  }
  Month(){
    month = 1;
  }
  void set(){

  }
  void outputInt(){
    if ((month>=1)&&(month<=12)){
      cout << "Month: " << month << endl;
    }
    else {
      cout << "Error" << endl;
    }
  }
  void outputLet(){
    switch(month){
      case 1:
      cout << "jan" << endl;
      break;
      case 2:
      cout << "feb" << endl;
      break;
      case 3:
      cout << "mar" << endl;
      break;
      case 4:
      cout << "apr" << endl;
      break;
      case 5:
      cout << "may" << endl;
      break;
      case 6:
      cout << "jun" << endl;
      break;
      case 7:
      cout << "jul" << endl;
      break;
      case 8:
      cout << "aug" << endl;
      break;
      case 9:
      cout << "sep" << endl;
      break;
      case 10:
      cout << "oct" << endl;
      break;
      case 11:
      cout << "nov" << endl;
      break;
      case 12:
      cout << "dec" << endl;
      break;
      default:
      cout << "Error" << endl;
    }
  }
  Month next(){
    return Month(month+1);
  }
};

int main(){
  //Month mo, mon, mont, month;

  int m;
  char first, second, third;


  cout << "Enter month number: " << endl;
  cin >> m;

  Month mon(m);
  mon.outputInt();
  mon.outputLet();

  cout << "Enter first letter: " << endl;
  cin >> first;
  cout << "Enter second letter: " << endl;
  cin >> second;
  cout << "Enter third letter: " << endl;
  cin >> third;

  Month mont(first, second, third);

  mont.outputInt();
  mont.outputLet();

  cout << "Enter month int" << endl;
  cin >> m;
  Month mo=mont.next();
  cout << "Next Month: " << endl;
  mo.outputInt();
  mo.outputLet();






}
