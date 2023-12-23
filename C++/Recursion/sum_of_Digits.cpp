#include<iostream>
using namespace std;

int SumDigit(int n){
    if(n>=0 & n<=9){
        return n;
    }

    return (SumDigit(n/10) + (n%10));
}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Sum of Digits is "<<SumDigit(n);
    return 0;
}