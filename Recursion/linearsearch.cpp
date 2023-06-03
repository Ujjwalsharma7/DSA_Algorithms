#include<iostream>
using namespace std;
bool Linearsearch(int *arr, int size, int key){

    if(size==0){
      return false;
    }
      
    
   

    if(arr[0] == key){
     return true;
    }
    else{

    bool remainingpart =     Linearsearch(arr+1, size-1, key);
    return remainingpart;
        
    }

    
}



int main(){
int arr[5]={1,2,3,9,7};
int size = 5 ;
int key = 7;
int ans = Linearsearch(arr, size, key);
if(ans){
    cout<<"found";
}else{
    cout<<"not found";
}



return 0;
}

