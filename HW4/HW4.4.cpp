#include <iostream>
using namespace std;

template <class T>
class DynamicStringArray{
private:
  T *dynamicArray;
  int size;
public:
  DynamicStringArray(){
    dynamicArray = NULL;
    size = 0;
  }

  int getSize() const{
    return size;
  }

  void addEntry(T str){
    size++;
    if (dynamicArray == NULL){
    dynamicArray = new T[size];
    for (int i = 0; i < size; i++){
      dynamicArray[i] = str;
    }
  }
  else{
    T *temp  = new T[size];
    for (int i = 0; i < size-1; i++){
      temp[i] = dynamicArray[i];
    }
    temp[size-1] = str;
    delete [] dynamicArray;
    dynamicArray = temp;
  }
}

  bool deleteEntry(T str){
    for (int i = 0; i < size; i++){
      if (dynamicArray[i] == str){
        --size;
        T *temp = new T[size];
        int index = i;
        for (int i = 0; i < size; i++){
          if (i < index){
            temp[i] = dynamicArray[i];
          }
          else {
            temp[i] = dynamicArray[i+1];
          }
        }
        delete [] dynamicArray;
        dynamicArray = temp;
        return true;
      }
      else{
        return false;
      }
    }
  }

  void getEntry(){
    for (int i = 0; i < size; i++){
    cout << dynamicArray[i] << " ";
  }
  cout << endl;
  }

  DynamicStringArray(const DynamicStringArray& obj) : size(obj.getSize()){
    dynamicArray = new T[size];
    for (int i = 0; i < size; i++){
      dynamicArray[i] = obj.dynamicArray[i];
    }
  }

  DynamicStringArray& operator = (const DynamicStringArray& rtSide){
    for (int i = 0; i < size; i++){
      dynamicArray[i] = rtSide.dynamicArray[i];
      return *this;
    }
  }

  ~DynamicStringArray(){
    delete [] dynamicArray;
  }

};

int main(){
  DynamicStringArray<string>x;
  x.addEntry("my");
  x.addEntry("name");
  x.addEntry("is");
  x.addEntry("oliver");
  x.getEntry();


  DynamicStringArray<string>y(x);
  y.getEntry();



  DynamicStringArray<int>in;
  in.addEntry(1);
  in.addEntry(2);
  in.addEntry(3);
  in.getEntry();
}
