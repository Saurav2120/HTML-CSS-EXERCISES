#include<iostream>
using namespace std;

int Sum_of_range(int n, int m){
    if(n>m){
        return 0; 
    }
    return n + Sum_of_range(n+1,m);
}

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int m;
    cout<<"Enter the Range: ";
    cin>>m;
    cout<<Sum_of_range(n,m);
    return 0;

}