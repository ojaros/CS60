#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Money
{
public:
  Money();
  Money(double amount);
  Money(int theDollars, int theCents){
    dollars = theDollars;
    cents = theCents;
  }
  Money(int theDollars);
  double getAmount() const{
    return dollars + cents*.01;
  }
  int getDollars() const{
    return dollars;
  }
  int getCents(){
    return cents;
  }
  friend const Money operator + (const Money& amount1, const Money& amount2);
  friend const Money operator - (const Money& amount1, const Money& amount2);
  friend bool operator == (const Money& amount1, const Money& amount2);
  friend const Money operator - (const Money& amount);
  friend ostream& operator << (ostream& outputStream, const Money& amount);
  friend istream& operator >> (istream& inputStream, Money& amount);
  friend bool operator < (const Money& amount1, const Money& amount2);
  friend bool operator <= (const Money& amount1, const Money& amount2);
  friend bool operator > (const Money& amount1, const Money& amount2);
  friend bool operator >= (const Money& amount1, const Money& amount2);
  const Money percent(int percentFigure) const{
    int d = dollars * percentFigure/100;
    int c = dollars * percentFigure%100 + cents * percentFigure/100;
    return Money(d, c);
  }


private:
  int dollars, cents;
  int dollarsPart(double amount) const{
    return static_cast<int>(amount);
  }
  int centsPart(double amount) const{
    double cents = amount*100;
    int intCents = (rounded(fabs(cents)))%100;
    return intCents;
  }
  int rounded(double number) const{
    return static_cast<int>(floor(number + .5));
  }
};

Money::Money() : dollars(0), cents(0){}
Money::Money(double amount) : dollars(dollarsPart(amount)), cents(centsPart(amount)){}
Money::Money(int theDollars) : dollars(theDollars), cents(0){}



bool operator < (const Money& amount1, const Money& amount2){
  return ((amount1.dollars<amount2.dollars) ||
  ((amount1.dollars==amount2.dollars) && (amount1.cents<amount2.cents)));
}

bool operator <= (const Money& amount1, const Money& amount2){
  return ((((amount1.dollars<amount2.dollars) ||
  ((amount1.dollars==amount2.dollars) && (amount1.cents<amount2.cents)))) ||
   ((amount1.dollars == amount2.dollars) && (amount1.cents == amount2.cents)));
}

bool operator > (const Money& amount1, const Money& amount2){
  return ((amount1.dollars>amount2.dollars) ||
  ((amount1.dollars==amount2.dollars)&&(amount1.cents>amount2.cents)));
}

bool operator >= (const Money& amount1, const Money& amount2){
  return ((((amount1.dollars>amount2.dollars) ||
  ((amount1.dollars==amount2.dollars) && (amount1.cents>amount2.cents)))) ||
   ((amount1.dollars == amount2.dollars) && (amount1.cents == amount2.cents)));
 }

 bool operator == (const Money& amount1, const Money& amount2){
   return ((amount1.dollars == amount2.dollars) && (amount1.cents == amount2.cents));
 }

 const Money operator + (const Money& amount1, const Money& amount2){
   int dollarsTotal = amount1.dollars + amount2.dollars;
   int centsTotal = amount1.cents + amount2.cents;
   if (centsTotal > 100){
     int remainingCents = centsTotal%100;
     dollarsTotal += 1;
     centsTotal = remainingCents;
   }
   if (dollarsTotal < 0){
     dollarsTotal = -dollarsTotal;
   }
   if (centsTotal < 0){
     centsTotal = -centsTotal;
   }
   return Money(dollarsTotal, centsTotal);
 }

 const Money operator - (const Money& amount1, const Money& amount2){
   int cents1 = amount1.dollars*100 + amount1.cents;
   int cents2 = amount2.dollars*100 + amount2.cents;
   int cents = cents1-cents2;
   int finalDollars = cents/100;
   int finalCents = cents%100;
   if (cents < 0){
     finalDollars = -finalDollars;
     finalCents = -finalCents;
   }
   return Money(finalDollars, finalCents);
 }




ostream& operator << (ostream& outputStream, const Money& amount){
  int absDollars = abs(amount.dollars);
  int absCents = abs(amount.cents);
  if (amount.dollars < 0 || amount.cents < 0){
    outputStream << "$-";
  }
  else {
    outputStream << '$';
    outputStream << absDollars;
  }
  if(absCents >= 10){
    outputStream << '.' << absCents;
  }
  else{
     outputStream << '.' << '0' << absCents;
   }
   return outputStream;
}

istream& operator >> (istream& inputStream, Money& amount){
  char dollarSign;
  inputStream >> dollarSign;
  if (dollarSign != '$'){
    cout << "No dollar sign in Money input" << endl;
    //exit(1);
  }
  double amountAsDouble;
  inputStream >> amountAsDouble;
  amount.dollars = amount.dollarsPart(amountAsDouble);
  amount.cents = amount.centsPart(amountAsDouble);
  return inputStream;
}

int main(){
  Money amnt1, amnt2(10, 50);
  cout << "Enter an amount of money: " << endl;
  cin >> amnt1;
  cout << "amount 1 is: " << amnt1 << endl;
  cout << "amount 2 is: " << amnt2 << endl;
  cout << "25% of amount 1 is: " << amnt1.percent(25) << endl;
  cout << "25% of amount 2 is: " << amnt2.percent(25) << endl;

  if (amnt1 == amnt2){
    cout << "Amounts are equal" << endl;
  }
  else {
    cout << "Amounts are different" << endl;
  }

  Money sum = amnt1 + amnt2;
  cout << "Sum is " << sum << endl;
  Money dif = amnt1 - amnt2;
  cout << "Difference is " << dif << endl;

  if (amnt1 < amnt2){
    cout << "Amount 1 is less than amount 2" << endl;
  }
  else {
    cout << "Amount 1 is not less than amount 2" << endl;
  }
  if (amnt1 >= amnt2){
      cout << "Amount 1 is greater than or equal to amount 2" << endl;
  }
  else {
    cout << "Amount 1 is not greater than or equal to amount 2" << endl;
  }

}
