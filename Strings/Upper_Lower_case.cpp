#include<iostream>
using namespace std;

// string uppercase(string &str){
// for(int i = 0; i<str.size(); i++){
//     if(str[i]>='a' && str[i]<='z'){
//         str[i] = str[i] - 32;
//     }
// }
// }

string lowercase(string str){

}


int main(){
string str;
cout<<"Enter your string"<<endl;
cin>>str;
for(int i = 0; i<str.size(); i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i] -= 32;
    }
}


cout<<"Uppercase = "<<str<<endl;

for(int i = 0; i<str.size(); i++){
    if(str[i]>='A' && str[i]<='Z'){
        str[i] += 32;
    }
}


cout<<"Lowerrcase = "<<str;
    return 0;
}