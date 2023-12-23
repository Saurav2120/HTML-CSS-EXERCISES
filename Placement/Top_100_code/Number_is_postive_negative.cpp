#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /* One Way:-
    if(n>0){
        cout<<n<<" is Postive Number.";
    }
    else if(n==0){
        cout<<"The Number is ZERO.";
    }
    else{
        cout<<n<<" is Negative Number.";
    }*/
    
    //Another way:-
    if(n==0){
        cout<<"Zero";
    }
    else(n>0)?cout<<"Positive Number":cout<<"Negative Number";

    return 0;

}
