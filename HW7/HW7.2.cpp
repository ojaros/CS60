#include <iostream>
using namespace std;


struct Node {
    int data;
    struct Node *next;
};

Node* mergeLists(Node* ptr1, Node* ptr2){

  if (ptr1 = NULL){
    return ptr2;
  }
  if (ptr2 = NULL){
    return ptr1;
  }


  if (ptr1 != NULL && ptr2 != NULL){
    if (ptr1->data < ptr2->data){
      ptr1->next = mergeLists(ptr1->next, ptr2);
      return ptr1;
    }
    else{
      ptr2->next = mergeLists(ptr1, ptr2->next);
      return ptr2;
    }
  }

}

Node *add(int d){
  struct Node *temp = new Node;
  temp->data = d;
  temp->next = NULL;
  return temp;
}

void display(Node *n){
  while (n != NULL){
    cout << n->data << " ";
    n = n->next;
  }
}


int main(){
  Node *h = add(3);
  h->next = add(5);

  Node *h2 = add(4);
  h->next = add(6);

  Node* merged = mergeLists(h, h2);
  display(merged);
}
