#include<iostream>
using namespace std;

void PrintingElements(int* arr,int idx, int n){
    if(idx==n){
        return;
    }
    cout<<"Elements are : "<<arr[idx]<<endl;
    PrintingElements(arr,idx+1,n);
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    PrintingElements(arr,0,n);
    return 0;

}