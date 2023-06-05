#include<iostream>
using namespace std;

bool palindrome(string s, int i, int j){

if(i>j)
    return true ;

    if(s[i]!=s[j])
    {
        return false;
        
    }
    else{
        palindrome(s,i+1,j-1);
    }

}


int main(){
    string s = {"naman"};

    int ans = palindrome(s,0,4);
    if(ans){
        cout<<"It is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }

    return 0;
}