#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> st, int num)
{
    if (st.empty())
    {
        st.push(num);
    }

    int n = st.top();
    st.pop();

    insertAtBottom(st, num);

    st.push(n);
}

int main()
{

    return 0;
}