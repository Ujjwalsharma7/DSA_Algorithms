#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create  queue
    queue<int> q;

    q.push(11);
    q.push(15);

    q.push(18);
    cout << q.front();
    q.pop();
    cout << q.size();

    return 0;
};