//Given an integers array "a" , return the prefix sum or running sum in the same array without creating new array.

#include<iostream>
#include<vector>
using namespace std;
void prefix_sum(vector<int> &v){
    for(int i =1;i<v.size();i++){
        v[i] +=v[i-1];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    prefix_sum(v);
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
