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

void insertNode( Node* &tail, int d, int element){
   
   if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode -> next = newNode;
   }

   else {
    //assuming non empty list, element is presnt

    Node* curr = tail;
    while(curr -> data != element){
        curr = curr->next;
    }

    //element found -> curr is respresenting elemnt node
    Node* temp = new Node(d);
    temp -> next = curr ->next;
    curr -> next = temp ;

   }
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

void print(Node* &tail){
Node* temp = tail;
do{
  cout<< tail -> data<< " ";
  tail = tail ->next;
}while (tail != temp);

}


int main(){

   Node* tail = NULL;

   insertNode(tail, 3, 5);
   insertNode(tail, 5, 3);
   insertNode(tail, 5, 5);
   
   print(tail);
   
   return 0;
}