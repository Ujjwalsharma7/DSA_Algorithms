#include<iostream>
using namespace std;

class Node {
    public:
     int data;
     Node* next;
     Node* prev;

     //contrucor
    Node(int d){
        this ->data = d;
        this ->next = NULL;
        this -> prev = NULL;
    }
 };

 void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
 }

 int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp -> next;
    }
    return len;
 }

 void insertAtHeadNode(Node* &head, int d){

   if(head == NULL){
      Node* temp = new Node(d);
      head = temp;
   }

    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev =temp;
    head = temp;
 }

 void inserttTail(Node* &tail, int d){

     if(tail == NULL){
      Node* temp = new Node(d);
      tail = temp;
   }
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
 }
 void InsertatPosition(int p, Node* &head, int d, Node* &tail){
  if(p == 1){
    insertAtHeadNode(head,d);
    return;
  }
  
  Node* temp = head;
  
  
  for(int i=1; i<p-1; i++){
   temp = temp -> next;
  }

  if(temp -> next == NULL){
    inserttTail(tail, d);
    return;
  }

  Node* u = new Node(d);
   u -> next = temp -> next;
   u ->prev = temp;
   temp -> next -> prev = u;
   temp -> next = u;


}

int main(){
     Node* node1 = new Node(10);
     Node* head = node1;
     Node* tail = node1;

   //   print(head);
     cout<<getLength(head)<<endl;;
     insertAtHeadNode(head, 15);
   //   print(head);
     insertAtHeadNode(head, 20);
     insertAtHeadNode(head, 25);
     inserttTail(tail, 69);
     InsertatPosition(2, head , 555, tail);
     print(head);
    return 0;
}