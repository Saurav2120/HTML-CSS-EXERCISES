#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return (fib(n-1) + fib(n-2));
}

int main(){
    int n;
    cout<<"Enter the digit : ";
    cin>>n;
    cout<<"Result is "<<fib(n);
    return 0;
}