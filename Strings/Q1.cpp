
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