#include<bits/stdc++.h>
using namespace std;

void reversearr(int a[],int n)
 {
    for(int i=0;i<n/2;i++)
    {
        swap(a[i],a[n-i-1]);
    }
 }

int main()
{
    int a[6]={10,20,39,46,25,50};
    reversearr(a,6);
    for(int i=0;i<6;i++)
    {
       cout<<a[i]<<endl;
    }

    return 0;
}
