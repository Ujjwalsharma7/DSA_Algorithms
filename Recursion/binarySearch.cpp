#include<iostream>
using namespace std;
int binarySearch(int *arr,int size, int s, int e, int key){
   int mid = (s+e)/2;

    if(size==0){
      return -1;
    }
      
    
   

    if(arr[mid]==key){
        return mid;
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
int arr[5]={1,2,3,7,9};
int size = 5 ;
int key = 9;
int ans = binarySearch(arr, size ,0, 4 ,key);
cout<<ans;



return 0;
}

