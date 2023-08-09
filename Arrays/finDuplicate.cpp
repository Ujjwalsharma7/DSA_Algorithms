#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {

        cnt = cnt + i;
    }

    int ans = sum - cnt;

    return ans;
}

int main()
{

    vector<int> a;
    a = {1, 3, 3, 2, 4, 5};
    cout << findDuplicate(a, 6);

    return 0;
}