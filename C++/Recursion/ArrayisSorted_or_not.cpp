#include<iostream>
using namespace std;

bool Sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool rest_array= Sorted(arr+1,n-1);
    return(arr[0]<arr[1] && rest_array);
    
}


int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
    }
    if(Sorted(arr,n)){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }
    return 0;
}