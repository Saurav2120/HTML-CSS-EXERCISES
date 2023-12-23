//Check if the given array is sorted or not.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    cout<<"Enter the array :";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    bool flag = true;
    for(int i=1;i<v.size();i++){
        if(v[i]<=v[i-1]){
            flag = false;

        }
    }
    cout<<flag;

    return 0;
}