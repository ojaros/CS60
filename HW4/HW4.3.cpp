#include <iostream>
#include <string>
#include <cstdlib>
//using std::cout;
//using std::endl;
//using std::string;
using namespace std;

template <class T>
class tclass{
private:
  int num;
  int size;
  T *arr;
public:
  tclass();
  ~tclass();
  void addItem(T newItem);
  void print();
  bool input(T item);
};

template <class T>
tclass<T>::tclass(){
  num = 0;
  size = 10;
  arr = new T[size];
}

template <class T>
tclass<T>::~tclass(){
  delete [] arr;
}

template <class T>
bool tclass<T>::input(T newItem){
  int i = 0;
  while(i < size){
    if (arr[i] == newItem){
      return true;
    }
    else {
      return false;
    }
  }
  i++;
}

template <class T>
void tclass<T>::addItem(T newItem){
  if (input(newItem) == false){
    size++;
    arr[size-1] = newItem;
  }
    //num++;
  //cout << "Count: " << num << endl;
}

template <class T>
void tclass<T>::print(){
for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
}
cout << endl;
}

/*int tclass::countItems(){
  for (int i = 0; i < size; i++){
    num++;
  }
}
*/

int main(){
  tclass<int> arr;
  arr.addItem(6);
  arr.addItem(5);
  arr.addItem(7);
  arr.addItem(5);
  arr.print();

  /*
  tclass<string> arr;
  arr.addItem("Hello");
  arr.addItem("World");
  arr.print();
  */
  }
