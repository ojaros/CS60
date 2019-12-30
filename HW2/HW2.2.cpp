#include <iostream>
#include <string>
using namespace std;

int lengthStr(char*);
void reverse(char*);

int main(){
  char s[1000];
  cout << "Input a string: " << endl;
  cin.getline(s,1000);
  reverse(s);
  cout << s << endl;
}

int lengthStr(char *pointer){
  int count = 0;
  while (*(pointer+count) != '\0') {
    count++;
  }
  return count;
}


void reverse(char* str){
  char *first;
  char *last;
  int len = lengthStr(str);
  first = str;
  last = str;
  for(int i = 0; i < len-1; i++){
    last++;
  }

  for (int j = 0; j < len/2; j++){
    char ch = *last;
    *last = *first;
    *first = ch;
    last--;
    first++;
  }
}
