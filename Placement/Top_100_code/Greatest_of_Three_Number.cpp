#include<iostream>
using namespace std;

int main(){
    int m,n,o;
    cout<<"Enter all three number: ";
    cin>>m>>n>>o;
    cout<<max(m,max(n,o))<<" is the Greatest Number";
    return 0;
}