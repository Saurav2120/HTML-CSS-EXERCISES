#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<len;i++){
        cin>>arr[i];
    }
    for(int i =0;i<len;i++){
        cout<<arr[i]<<" ";

    }
return 0;


}
