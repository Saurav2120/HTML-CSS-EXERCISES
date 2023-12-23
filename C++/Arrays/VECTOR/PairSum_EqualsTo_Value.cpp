//Given a vector arr[] sorted in increasing order of n size and an integer x,
//find if there exists a pair in the array whose sum is exactly x.

#include<iostream>
#include<vector>
using namespace std;
bool Pair_sum(vector<int> &v){
    int x;
    cout<<"Enter the value : ";
    cin>>x;
    int i=0;
    int left_ptr =0;
    int right_ptr=v.size()-1;
    while(left_ptr< right_ptr){
        if(v[left_ptr] + v[right_ptr] == x){
            return true;
        }
        else if(v[left_ptr]+ v[right_ptr] <x){
            left_ptr++;
        }
        else{
            right_ptr--;

        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    if(Pair_sum(v)){
        cout<<" YES ";
    }
    else{
        cout<<" NO ";
    }
    return 0;

}