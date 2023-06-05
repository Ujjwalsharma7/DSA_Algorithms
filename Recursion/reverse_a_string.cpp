#include<iostream>
using namespace std;

void revString(string& s, int i, int j){
    if(i>j)
     return ;

     swap(s[i], s[j]);

revString(s, i+1, j-1);


}



int main(){
    string s = {"abcd"};
    revString(s,0,3);
    cout<<s;

    return 0;
}