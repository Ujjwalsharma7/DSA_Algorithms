#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
  int ams = fibonacci(n-1)+fibonacci(n-2);
  return ams;
}


int main(){
int n ;
cin>>n;
int ans =fibonacci(n);
cout<<ans;

return 0;
}
