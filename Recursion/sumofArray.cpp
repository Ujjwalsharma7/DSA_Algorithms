 #include<iostream>
 using namespace std;


int recursiveSum(int *arr, int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remainingpart = recursiveSum(arr+1, n-1);
    int sum = arr[0] + remainingpart;
    return sum;

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int ans = recursiveSum(arr, n);
cout<<ans;

 return 0;
 }
