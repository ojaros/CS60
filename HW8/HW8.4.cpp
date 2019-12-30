#include <iostream>
#include <set>
#include <cmath>
#include <iterator>
#include <string>
using namespace std;
using std::insert_iterator;





void compare(set<string> A, set<string> B){
  int aCount = 0;
  int bCount = 0;
  int intersectCount = 0;
  double similarity;


  for (int i = 0; i < A.size(); i++){
    aCount++;
  }
  for (int i = 0; i < B.size(); i++){
    bCount++;
  }

  set<string> C;
  set<string>::iterator it;
  insert_iterator<set<string> > cIterator(C, C.begin());
  std::set_intersection(A.begin(), A.end(), B.begin(), B.end(), cIterator);
  cout << endl << endl << "Similar words: " << endl << endl;
  for (it = C.begin(); it != C.end(); it++){
    cout << *it << endl;
    intersectCount++;
  }


  cout << "Num of similar words: " << intersectCount << endl;
  cout << "Num of words in query: " << aCount << endl;
  cout << "Num of words in document: " << bCount << endl;



  similarity = static_cast<double>((intersectCount)/(sqrt(aCount)*sqrt(bCount)));
  cout << endl << "The binary cosine coefficient is: " << similarity << endl;

}


int main(){
  int numQ;
  int numD;
  string q;
  string d;
  set<string> query;
  set<string> document;

  int cnt = 0;
  int cnt2 = 0;

  cout << "How many strings in Query? " << endl;
  cin >> numQ;
  cout << "Input strings in Query: " << endl;
  for (int i = 0; i < numQ; i++){
    cin >> q;
    query.insert(q);
  }

  cout << "How many strings in Document?" << endl;
  cin >> numD;
  cout << "Input strings in Document" << endl;
  for (int i = 0; i < numD; i++){
    cin >> d;
    document.insert(d);
  }

//  for(auto it : query){
//    cout << it << endl;
//  }

  compare(query, document);

}
