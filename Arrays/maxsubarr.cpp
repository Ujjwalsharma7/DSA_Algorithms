#include<bits/stdc++.h>
using namespace std;

int maxsubarrsum(int a[],int n)
{
    int maxsum=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum= maxsum +a[i];

        }
         maxsum=max(maxsum,sum);
    }
    return maxsum;
}

int main()
{
    int a[9]={-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxsubarrsum(a,9);
    cout<<ans;

    return 0;
}
