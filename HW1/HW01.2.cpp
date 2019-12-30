#include <iostream>
using namespace std;

class Point{
private:
  int horizontal;
  int vertical;
public:
  Point(){
    horizontal = 0;
    vertical = 0;
  }
  void set(int hor, int ver){
    horizontal = hor;
    vertical = ver;
  }
  void move(int horiz1, int vert1){
    vertical += vert1;
    horizontal += horiz1;
  }
  void rotate(){
    int temp = horizontal;
    horizontal = vertical;
    vertical = (-1)*temp;
  }
  const int inspectHorizontal(){
    return horizontal;
  }

  const int inspectVertical(){
    return vertical;
  }
};




int main(){

  Point pt;
  int horizontal, vertical;

  cout << "Enter a x coordinate: " << endl;
  cin >> horizontal;

  cout << "Enter a y coordinate: " << endl;
  cin >> vertical;

  pt.set(horizontal, vertical);

  cout << "Point is: " << pt.inspectHorizontal() << ", " << pt.inspectVertical() << endl;

  pt.move(5, 5);

  cout << "New point is: " << pt.inspectHorizontal() << ", " << pt.inspectVertical() << endl;

  pt.rotate();

  cout << "New point is: " << pt.inspectHorizontal() << ", " << pt.inspectVertical() << endl;
}
