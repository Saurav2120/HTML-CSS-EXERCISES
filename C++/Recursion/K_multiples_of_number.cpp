#include<iostream>
using namespace std;

void Multiples(int n, int k){
    if(k==0){
        return;
    }
    Multiples(n,k-1);
    cout<<(n*k)<<" ";
}

int main(){
    int n,k;
    cout<<"Enter the Number and No.of times to multiply respectively : ";
    cin>>n>>k;
    Multiples(n,k);
    return 0;
}