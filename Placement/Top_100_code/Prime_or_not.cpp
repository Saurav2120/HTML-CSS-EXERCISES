#include<iostream>
using namespace std;

bool isPrime(int n, int i){
    if(i==1){
        return true;
    }
    if(n%i==0){
        return false;
    }
    isPrime(n,i-1);

}

int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    if(n==1){
        cout<<n<<" is not a Prime";
    }
    if(isPrime(n,n/2)){
        cout<<n<<" is a Prime Number";
    }
    else{
        cout<<n<<" is Not a Prime Number";
    }
    return 0;
}