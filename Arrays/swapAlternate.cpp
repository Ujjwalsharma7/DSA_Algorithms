#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {9, 8, 7, 6, 5, 4, 3};

    swapAlternate(odd, 8);
    print(odd, 8);
    return 0;
}