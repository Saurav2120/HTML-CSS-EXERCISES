#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int Max_value(int* arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }
    return max(arr[idx],Max_value(arr,idx+1,n));
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum alue is : "<<Max_value(arr,0,n);

    return 0;
}
