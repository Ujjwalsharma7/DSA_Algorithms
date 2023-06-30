#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



int main(){
string str;
cout<<"Enter your string"<<endl;
cin>>str;

sort(str.begin(), str.end(), greater<int>());

cout<<str<<endl;

    return 0;
}