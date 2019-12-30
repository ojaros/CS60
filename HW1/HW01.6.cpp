#include <iostream>
using namespace std;

class ZipCode{
private:
  int zip;
  string bar;
  void getBar(int zip){
    int temp;
    do{
      temp = zip%10;
      zip = zip/10;
      switch(temp){
        case 0:
        bar = "11000" + bar;
        break;
        case 1:
        bar = "00011" + bar;
        break;
        case 2:
        bar = "00101" + bar;
        break;
        case 3:
        bar = "00110" + bar;
        break;
        case 4:
        bar = "01001" + bar;
        break;
        case 5:
        bar = "01010" + bar;
        break;
        case 6:
        bar = "01100" + bar;
        break;
        case 7:
        bar = "10001" + bar;
        break;
        case 8:
        bar = "10010" + bar;
        break;
        case 9:
        bar = "10100" + bar;
        break;
      }
    }
    while(zip>0);
  }
  void getZip(string bar){
    string s;
    s = bar.substr(0,5);
    if(s=="11000"){
      cout << "error" << endl;
    }
    do{
      s = bar.substr(0,5);
      bar = bar.substr(5);
      if(s == "11000"){
        zip = zip*10+0;
      }
      else if(s == "00011"){
        zip = zip*10+1;
      }
      else if(s == "00101"){
        zip = zip*10+2;
      }
      else if(s == "00110"){
        zip = zip*10+3;
      }
      else if(s == "01001"){
        zip = zip*10+4;
      }
      else if(s == "01010"){
        zip = zip*10+5;
      }
      else if(s == "01100"){
        zip = zip*10+6;
      }
      else if(s == "10001"){
        zip = zip*10+7;
      }
      else if(s == "10010"){
        zip = zip*10+8;
      }
      else if(s == "10100"){
        zip = zip*10+9;
      }
      else{
        cout << "Error" << endl;
      }
    }while(bar.length()>0);
  }
public:
  ZipCode(int code){
    zip = code;
    bar = "";
    getBar(zip);
  }
  ZipCode(string barS){
    bar = barS;
    zip = 0;
    getZip(barS);
  }
  int getZipCode(){
    return zip;
  }
  string getBarCode(){
    return bar;
  }
};

int main(){
  int zipC = 0;
  string barC = "";

  cout << "Enter zip code: " << endl;
  cin >> zipC;
  ZipCode zip1(zipC);
  cout << zip1.getZipCode() << endl;
  cout << zip1.getBarCode() << endl;
  cout << "Enter bar code: " << endl;
  cin >> barC;
  ZipCode zip2(barC);
  cout << zip2.getBarCode();
  cout << zip2.getZipCode();
  return 0;
}
