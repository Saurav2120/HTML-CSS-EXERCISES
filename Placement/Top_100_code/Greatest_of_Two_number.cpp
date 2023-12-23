#include<iostream>
using namespace std;

 //Using Classes:
 class Greatest{
    public:
    int largest(int,int);
 };

int Greatest::largest(int a, int b){
    if(a==b){
        cout<<"Both are Equal";
    }
    else if(a>b){
        cout<<a<<" is Greatest";
    }
    else{
        cout<<b<<" is Greatest";
    }

}

int main(){
    int n1,n2,largest;
    cin>>n1>>n2;

    // //Ternery Operator:
    // if(n1==n2)
    // cout<<"Both are Equal";
    // else(n1>n2)?cout<<n1<<" is Greater":cout<<n2<<" is Greater";

    // //Using Max in built fxn:
    // if(n1==n2)
    // cout<<"Both are Equal";
    // else if(largest=max(n1,n2)){
    //     cout<<largest<<" is greatest";
    // }

    Greatest obj;
    obj.largest(n1,n2);

   


    return 0;

}