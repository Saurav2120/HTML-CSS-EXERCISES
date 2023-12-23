//Search if a given element is present in the array or not. If it is not present then return -1 else return the index.
#include<iostream>
using namespace std;
int main(){
    int arr[] ={3,9,18,11,7};
    int key;
    cin>>key;
    int flag = -1;
    for(int i=0;i<5;i++){
        if(key==arr[i]){
            flag = i;
            break;
        }
    }
    cout<<flag;
return 0;
}