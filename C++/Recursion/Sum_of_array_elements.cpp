#include<iostream>
using namespace std;

int Sum(int* arr, int idx, int n){
    if(idx == n-1){
        return arr[idx];
    }
    return (arr[idx]+Sum(arr,idx+1,n));
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum is : "<<Sum(arr,0,n);
    return 0;
}