#include<iostream>
using namespace std;

void Natural(int n){
    if(n<0){
        return;
    }
    Natural(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<" Enter the size of natural no. to print : ";
    cin>>n;
    Natural(n);
    return 0;

}