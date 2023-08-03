#include <bits/stdc++.h>
using namespace std;

void Solve(stack<int> &inputStack, int size, int count)
{
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call

    Solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int size)
{
    int count = 0;
    Solve(inputStack, size, count);
}

int main()
{
    stack<int> st;
    st.push(69);
    st.push(19);
    st.push(30);
    st.push(76);
    st.push(45);

    deleteMiddle(st, 5);

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    cout << "hello";
    return 0;
}