#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  // destructor
  ~Node()
  {
    int value = this->data;
    if (this->next != NULL)
    {

      delete next;
      this->next = NULL;
    }
    cout << "memory is free for node with data" << value << endl;
  }
};

void insertAtHeadNode(Node *&head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void InsertatPosition(int p, Node *&head, int d, Node *&tail)
{
  if (p == 1)
  {
    insertAtHeadNode(head, d);
    return;
  }

  Node *temp = head;

  for (int i = 1; i < p - 1; i++)
  {
    temp = temp->next;
  }

  if (temp->next == NULL)
  {
    InsertAtTail(tail, d);
    return;
  }

  Node *u = new Node(d);
  u->next = temp->next;
  temp->next = u;
}

void Deletion(int p, Node *&head)
{
  if (p == 1)
  {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  else
  {
    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while (cnt < p)
    {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

int getLength(Node *&head)
{
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  return len;
}
Node *reverseLinkedList(Node *&head)
{
  Node *curr = head;
  Node *prev = NULL;
  while (curr != NULL)
  {
    Node *forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}

Node *findMiddleNode1(Node *&head)
{
  int len = getLength(head);
  int ans = (len / 2);

  int cnt = 0;
  Node *temp = head;

  while (cnt < ans)
  {
    temp = temp->next;
    cnt++;
  }
  return temp;
}

Node *findMiddleNode2(Node *&head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  if (head->next->next == NULL)
  {
    return head->next;
  }
  Node *slow = head;
  Node *fast = head->next;

  while (fast != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
    {
      fast = fast->next;
    }
    slow = slow->next;
  }

  return slow;
}

// Reverse in group of k

Node *Kreverse(Node *&head, int k)
{

  // base case
  if (head == NULL || head->next == NULL)
  {
    return head;
  }

  // Reverse first k nodes
  Node *next = NULL;
  Node *curr = head;
  Node *prev = NULL;
  int count = 0;

  while (curr != NULL || count < k)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }

  // make a recursive call for rest of the list
  if (next != NULL)
  {
    head->next = Kreverse(next, k);
  }

  return prev;
}

bool floydDetectLoop(Node *&head)
{
  if (head == NULL)
  {
    return false;
  }
  Node *slow = head;
  Node *fast = head;

  while (slow != fast && fast != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
    {
      fast = fast->next;
    }
    slow = slow->next;
  }
  if (slow == fast)
  {
    return true;
  }

  return false;
}

void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }
}

int main()
{

  Node *node1 = new Node(10);

  Node *head = node1;
  Node *tail = node1;

  InsertAtTail(tail, 12);
  InsertAtTail(tail, 15);
  InsertatPosition(3, head, 60, tail);
  InsertatPosition(5, head, 69, tail);
  insertAtHeadNode(head, 1);
  print(head);
  cout << endl;
  // cout << getLength(head);
  Node *ans = Kreverse(head, 1);
  cout << endl;
  print(ans);
  return 0;
}