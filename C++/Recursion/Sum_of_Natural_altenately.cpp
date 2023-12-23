#include<iostream>
using namespace std;

int Sum(int n){
    if(n==0){
        return 0 ;

    }
    return Sum(n-1)+ (((n%2)==0)?-n:n);
}

int main(){
    int n;
    cout<<"Enter the Natural no. : ";
    cin>>n;
    cout<< Sum(n);
    return 0;
}