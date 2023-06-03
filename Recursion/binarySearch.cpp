#include<iostream>
using namespace std;
bool binarySearch(int *arr,int size, int s, int e, int key){
   int mid = (s+e)/2;

    if(size==0){
      return false;
    }
      
    
   

    if(arr[mid]==key){
        return true;
    }
    else if(key>arr[mid]){
        int remainingpart = binarySearch(arr,size/2,(mid+1), e, key);
        return remainingpart;
    }
     else if(key<arr[mid]){
        int remainingpart = binarySearch( arr ,size/2, e ,(mid-1), key);
        return remainingpart;
    }
    
}



int main(){
int arr[5]={1,2,3,9,7};
int size = 5 ;
int key = 0;
int ans = binarySearch(arr, size ,0, 4 ,key);
if(ans){
    cout<<"found";
}else{
    cout<<"not found";
}



return 0;
}

