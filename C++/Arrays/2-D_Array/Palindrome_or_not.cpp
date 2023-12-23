#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check =true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
        check=false;
        break;
        }
    }
    if(check)
    cout<<"It is a Palindrome";
    else
    cout<<"Not a Palindrome";

    return 0;

    
}