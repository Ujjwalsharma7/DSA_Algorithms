#include<bits/stdc++.h>
using namespace std;
struct pairr
{
    int minn;
    int maxx;
};

struct pairr maxmin(int a[],int n)
{
    struct pairr p;
    if(n==1)
    {
        a[0]=p.maxx=p.minn;
        return p;
    }
    if(a[0]>a[1])
    {
        p.maxx=a[0];
        p.minn=a[1];
    }
    else if(a[0]<a[1])
    {
         p.maxx=a[1];
        p.minn=a[0];
    }
    for(int i=2;i<n;i++)
    {
        if(a[i] > p.maxx)
            p.maxx = a[i];

        else if(a[i] < p.minn)
            p.minn = a[i];
    }
    return p;
};
int main()
{
    int a[5]={10,20,39,46,25};
    struct pairr ans=maxmin(a,5);
    cout<<ans.maxx<<endl;
    cout<<ans.minn;

    return 0;
}
