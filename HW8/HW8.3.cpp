#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct StudentInfo{
  string name;
  int grade;
};


bool isFailing(const StudentInfo& s){
  if (s.grade < 60){
    return true;
  }
  else {
    return false;
  }
}


bool op(const StudentInfo& s, const StudentInfo& s2){
  return s.name < s2.name;
}




int main(){
  int numStudents;
  int maximumGrade = 0;
  int minimumGrade = 100;
  int totalGrade = 0;
  int count = 0;
  StudentInfo stu;

  vector<struct StudentInfo> student;
  string name;
  int grade;


  //inputting student vector data
  cout << "How many students are there? " << endl;
  cin >> numStudents;

  for (int i = 0; i < numStudents; i++){
    cout << "Enter student name: " << endl;
    cin >> stu.name;
    cout << "Enter student's grade: " << endl;
    cin >> stu.grade;
    student.push_back(stu);
  }




  vector<StudentInfo>::iterator p;
  cout << endl << "UNSORTED: " << endl << endl;
  for (p = student.begin(); p != student.end(); p++){
    cout << "Name: " << p->name << endl << "Grade: " << p->grade << endl;
  }


  for (p = student.begin(); p != student.end(); p++){
    if(p->grade >= maximumGrade){
      maximumGrade = p->grade;
    }
    if (p->grade <= minimumGrade){
      minimumGrade = p->grade;
    }
    totalGrade += p->grade;
    count++;
  }

  double averageGrade = static_cast<double>((totalGrade)/(count));
  cout << "Max Grade: " << maximumGrade << endl;
  cout << "Min Grade: " << minimumGrade << endl;
  cout << "Avg Grade: " << averageGrade << endl;


  sort(student.begin(), student.end(), op);
  cout << endl << "SORTED: " << endl << endl;

  for (p = student.begin(); p != student.end(); p++){
    cout << "Name: " << p->name << endl << "Grade: " << p->grade << endl;
  }



  vector<struct StudentInfo> failing;
  for(p = student.begin(); p != student.end(); p++){
    if (isFailing(*p)){
      failing.push_back(*p);
      student.erase(p);
      p = student.begin();
    }
  }

  cout << endl << "FAILING STUDENTS: " << endl << endl;
  for(p = failing.begin(); p !=failing.end(); p++){
    cout << "Name: " << p->name << endl << "Grade: " << p->grade << endl;
  }

  cout << endl << "PASSING STUDENTS: " << endl << endl;
  for(p = student.begin(); p != student.end(); p++){
    cout << "Name: " << p->name << endl << "Grade: " << p->grade << endl;
  }









}
