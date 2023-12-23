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
    int range,n,count=0;
    cout<<"Enter the Start & the Range:";
    cin>>n>>range;
    
    while(n<=range){
        if(n==1){
            n++;
        }
        if(isPrime(n,n/2)){
            cout<<n<<" ";
            count++;
        }
        if(count==10){
            break;
        }
        n++;
    }
    // if(isPrime(n,n/2)){
    //     cout<<n<<" is a Prime Number";
    // }
    // else{
    //     cout<<n<<" is Not a Prime Number";
    // }
    return 0;
}