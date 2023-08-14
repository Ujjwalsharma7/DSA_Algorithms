#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int(size);
        front = 0;
        rear = 0;
    }

    // public functions

    void enqueue(int data)
    {
        if ((rear + 1) % size == front)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear = (rear + 1) % (size);
            arr[rear] = data;
        }
    }

    int dequeue()
    {
        int x = -1;
        if (rear == front)
        {
            return -1;
        }
        else
        {
            front = (front + 1) % (size);
            x = arr[front];
            return x;
        }
    }

    int Front()
    {
        int x = -1;
        if (rear == front)
        {
            return -1;
        }
        else
        {
            front = (front + 1) % (size);
            x = arr[front];
            return x;
        }
    }
};

int main()
{

    CircularQueue q(7);
    q.enqueue(10);
    cout << q.Front();

    return 0;
}