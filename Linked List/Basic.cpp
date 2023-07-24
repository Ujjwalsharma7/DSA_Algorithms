#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  
  //constructor 
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
  //destructor
  ~Node(){
    int value = this -> data;
    if(this -> next != NULL){

    delete next;
    this -> next =NULL;
    }
    cout<< "memory is free for node with data" << value <<endl;
  }
  

};

void insertAtHeadNode( Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next =  head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
  Node* temp = new Node(d);
  tail -> next = temp;
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
    InsertAtTail(tail, d);
    return;
  }

  Node* u = new Node(d);
   u -> next = temp -> next;
   temp -> next = u;


}

void Deletion(int p, Node* &head){
  if(p == 1){
    Node* temp = head;
    head = head->next;
  temp -> next = NULL;
    delete temp;
  }
  else{
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < p){
      prev = curr;
      curr = curr -> next;
      cnt++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
     
  }
}

void print(Node* &head){
Node* temp = head;
while(temp != NULL){
    cout<< temp -> data <<endl;
    temp = temp -> next;
}
}


int main(){

    Node* node1 = new Node(10);
   
    Node* head = node1;
    Node* tail = node1;
   
    InsertAtTail(tail, 12);
    InsertAtTail(tail, 15);
    InsertatPosition(3, head , 60, tail);
    InsertatPosition(5, head, 69, tail);
    print(head);
    Deletion(2, head);
    cout<<"Here we go"<<endl;
    print(head);
    return 0;
}