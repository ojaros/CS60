#include <iostream>
#include <string>
using namespace std;

class Student{
public:
  Student(){
    name = "";
    numClasses = 0;
    classList = new string[1000];
  }
  Student(const Student& stu) : name(stu.getName()), numClasses(stu.getNumClasses()){
    classList = new string[numClasses];
    for (int i = 0; i < numClasses; i++){
      classList[i]=stu.classList[i];
    }
  }

  Student& operator = (const Student& newCopy){
    delete[] classList;
    classList = new string[newCopy.numClasses];
    name = newCopy.name;
    numClasses = newCopy.numClasses;
    for(int i = 0; i < numClasses; i++){
      classList[i] = newCopy.classList[i];
      return *this;
    }
  }

  string getName() const{
    return name;
  }
  int getNumClasses() const{
    return numClasses;
  }
  string* getClassList() const{
    return classList;
  }

  void input(){
    cout << "Enter a name: " << endl;
    cin >> name;
    //name = n;
    cout << "Enter the number of classes they are in: " << endl;
    cin >> numClasses;
    //numClasses = num;
    for (int i = 0; i < numClasses; i++){
      cout << "Enter a class: " << endl;
      cin >> classList[i];
    }
    //classList = classes;
  }
  void output(){
    cout << "Student name: " << name << endl;
    cout << "Number of classes: " << numClasses << endl;
    cout << "Classes: " << endl;
    for (int i = 0; i < numClasses; i++){
      cout << classList[i] << endl;
    }
  }

  void reset(){
    name = "";
    for (int i = 0; i < numClasses; i++){
      classList[i] = '\0';
      numClasses = 0;
    }
  }

  ~Student(){
    delete []classList;
  }

private:
  string name;
  int numClasses;
  string* classList;
};


int main(){
  Student stu;
  Student s;
  stu.reset();
  stu.input();
  stu.output();
  s=stu;
  s.output();

  cout << "Copy: " << endl;
  Student newStudent(stu);
  newStudent.output();

}
