#include<iostream>
using namespace std;

/*int Power(int n, int m){
    if(m==0){
        return 1;
    }
    return (n * Power(n,m-1));
}*/ //Time complexity = O(m)

//Optimize way: 
int Power(int n, int m){
    
    /*if(m==0){
        return 1;
    }
    if(m%2==0){
        int ans = (Power(n,m/2));
        return ans*ans;
    }
    else{
        int ans = (Power(n,(m-1)/2));
        return n*ans*ans;
    }*/

    if(m==0){
        return 1;      
    }
    int prev_power = Power(n,m-1);
    return n*prev_power;
    
}


int main(){
    int n,m;
    cout<<"Enter the numbers : ";
    cin>>n>>m;
    cout<<"Power of "<<n<<" to "<<m<<" is "<<Power(n,m);
    return 0;
}