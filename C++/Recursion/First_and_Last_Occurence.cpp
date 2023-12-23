#include<iostream>
using namespace std;

int first_occurence(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return  first_occurence(arr,n,i+1,key);
}

int last_occurence(int arr[],int n, int i, int key){
    if(i<0){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return last_occurence(arr,n,i-1,key);
    
}



int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array : ";
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
    }
    int idx=0;
    int key;
    cout<<"Enter the Key to find : ";
    cin>>key;
    cout<< first_occurence(arr,n,idx,key);
    cout<<endl;
    cout<<last_occurence(arr,n,n-1,key);
    return 0;
}