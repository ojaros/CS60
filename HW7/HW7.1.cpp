#include <iostream>
using namespace std;



struct Node{
  int data;
  struct Node *next;
  Node (int data){
    this->data = data;
    next = NULL;
  }
};



void reverse(Node *head){
  Node *current, *previous, *next;
  previous = NULL;
  next = NULL;
  current = head;

  while(current != NULL){
    next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  head = previous;
}

void display(Node *n){
  while (n != NULL){
    cout << n->data << " ";
    n = n->next;
  }
}

Node *add(int data){
  struct Node *d = new Node(data);
  d->next = head;
  head = d;
}

};

int main(){
  List l;
  Node *head = l.add(4);
  l.add(4);
  l.add(3);
  l.add(2);
  l.add(1);

  l.display();
  l.reverse(head);
  l.display();
  return 0;
}
