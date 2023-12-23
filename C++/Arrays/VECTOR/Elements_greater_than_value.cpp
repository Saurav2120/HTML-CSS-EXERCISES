//count the no. of elements strictly greater than value x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];

    }
    int flag;
    cout<<"Enter the value :";
    cin>>flag;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>flag){
            count++;
        }
    }
    cout<<count;

    return 0;
}