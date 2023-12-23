#include<iostream>
using namespace std;

int Power(int n, int m){
    
    if(m==0){
        return 1;
    }
    if(m%2==0){
        int ans = (Power(n,m/2));
        return ans*ans;
    }
    else{
        int ans = (Power(n,(m-1)/2));
        return n*ans*ans;
    }
    
}

int Armstrong(int n, int ld){
    if(n==0){
        return 0;
    }
    return Power(n%10,ld) + Armstrong(n/10,ld);


}

int main(){
    int n;
    cin>>n;
    int no_of_digits = 0;
    int temp =n;
    while(temp>0){
        temp = temp/10;
        no_of_digits++;
    }
    int result = Armstrong(n,no_of_digits);
    if(result == n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}