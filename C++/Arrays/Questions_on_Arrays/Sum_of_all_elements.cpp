#include<iostream>
using namespace std;
int main(){
    //Calculate sum of all the elements in the given array:
    int arr[] = {2,6,5,45,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;

}