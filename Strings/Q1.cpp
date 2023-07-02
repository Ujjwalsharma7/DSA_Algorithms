// Problem
// Chef invented a modified wordle.

// There is a hidden word 
// �
// S and a guess word 
// �
// T, both of length 
// 5
// 5.

// Chef defines a string 
// �
// M to determine the correctness of the guess word. For the 
// �
// �
// ℎ
// i 
// th
//   index:

// If the guess at the 
// �
// �
// ℎ
// i 
// th
//   index is correct, the 
// �
// �
// ℎ
// i 
// th
//   character of 
// �
// M is 
// G
// G.
// If the guess at the 
// �
// �
// ℎ
// i 
// th
//   index is wrong, the 
// �
// �
// ℎ
// i 
// th
//   character of 
// �
// M is 
// B
// B.
// Given the hidden word 
// �
// S and guess 
// �
// T, determine string 
// �
// M.

// Input Format
// First line will contain 
// �
// T, number of test cases. Then the test cases follow.
// Each test case contains of two lines of input.
// First line contains the string 
// �
// S - the hidden word.
// Second line contains the string 
// �
// T - the guess word.
// Output Format
// For each test case, print the value of string 
// �
// M.

// You may print each character of the string in uppercase or lowercase (for example, the strings 
// BgBgB
// BgBgB, 
// BGBGB
// BGBGB, 
// bgbGB
// bgbGB and 
// bgbgb
// bgbgb will all be treated as identical).

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	for(int i=0; i<T; i++){
	    string S , T;
	    cin>>S;
	    cin>>T;
	    string M = "aaaaa";
	    
	    for(int i=0; i<5; i++){
	        if(S[i] == T[i] ){
	            M[i] = 'G';
                // cout<<'G';
	        } else {
	            M[i] = 'B';
                // cout<<'B';
	        }
	    }
	    
	    cout<<M<<endl;
	    
	}
	
	return 0;
}