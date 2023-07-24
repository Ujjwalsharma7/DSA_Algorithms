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
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev =temp;
    head = temp;
 }

 void inserttTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
 }

int main(){
     Node* node1 = new Node(10);
     Node* head = node1;

     print(head);
     cout<<getLength(head)<<endl;;
     insertAtHeadNode(head, 15);
     print(head);
    return 0;
}