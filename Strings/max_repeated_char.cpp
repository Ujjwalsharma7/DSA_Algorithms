#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



int main(){
string str;
cout<<"Enter your string"<<endl;
cin>>str;

int freq[26] = {0};

for(int i=0; i<26; i++){
    freq[str[i]-'a']++;
}

char ans = 'a';
int maxF = 0;

for(int i =0; i<26; i++)
{
    if(freq[i] > maxF)
    {
        maxF = freq[i];
        ans = i + 'a';
    }
}
cout<<ans<<" "<<maxF<<endl;

    return 0;
}