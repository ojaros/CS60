#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void grid(string word, string str, char arr[4][4], int x, int x2, int y, int y2, int lastx, int lasty, int index){

if(x > -1 && y > -1 && x < 4 && y < 4 && (str.length() < word.length())) {
if ((word[index] == arr[x][y]) && !(x == lastx && y == lasty)){
  str += arr[x][y];
  index++;
}
else{
  return;
}

if (word == str){
  cout << word << endl;
  return;
}
else {
  grid(word, str, arr, x, y-1, x, y, x2, y2, index);
  grid(word, str, arr, x, y+1, x, y, x2, y2, index);
  grid(word, str, arr, x-1, y-1, x, y, x2, y2, index);
  grid(word, str, arr, x-1, y, x, y, x2, y2, index);
  grid(word, str, arr, x-1, y+1, x, y, x2, y2, index);
  grid(word, str, arr, x+1, y-1, x, y, x2, y2, index);
  grid(word, str, arr, x+1, y, x, y, x2, y2, index);
  grid(word, str, arr, x+1, y+1, x, y, x2, y2, index);
}
}
return;
}


int words(char w[4][4]){
  string str = "";
  ifstream istream("words.txt");
  //istream.open("words.txt");
  string s;
  if(!istream){
    cout << "Invalid file" << endl;
    return 0;
  }
  while(istream){
    istream >> s;
    for (int x = 0; x < 4; x++){
      for (int y = 0; y < 4; y++){
        if(s[0] == w[x][y]){
          grid(s, str, w, x, y, -1, -1, -1, -1, 0);
        }
      }
    }
  }
  istream.close();
  return 1;
}



int main(){
  char grid[4][4];
  for (int x = 0; x < 4; x++){
    for (int y = 0; y < 4; y++){
      int ch = rand()%26;
      grid[x][y] = char('a' + ch);
      cout << grid[x][y];
    }
    cout << endl;
  }
  cout << endl << "Words from words.txt file: " << endl;
  words(grid);
}
