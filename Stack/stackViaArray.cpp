#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "stack underflow";
        }
        return arr[top];
    }

    bool isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(20);
    st.push(11);
    st.push(55);
    // cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    // cout << st.peek() << endl;
    // st.peek();
    if (st.isempty())
    {
        cout << "stack is empty" << endl;
    }

    return 0;
}