 #include<iostream>
using namespace std;

void ifEqual(string s1, string s2){
    if(s1.compare(s2) == 0){
        cout<<"Strings are equal";
    }
    else {
        cout<<"strings are not equal";
    }
}

int main(){
    string s1 = "abc";
    string s2 = "abc";
    ifEqual(s1, s2);
    return 0;
}