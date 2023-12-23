#include<iostream>
using namespace std;

int Sum_First_n_Natural(int n){
    if(n==1){
        return 1 ;
    }
    return n + Sum_First_n_Natural(n-1);
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<Sum_First_n_Natural(n);
}