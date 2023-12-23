//Check if we can partition the array into two subarrays with equal sum.
//More f0rmally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
#include<iostream>
#include<vector>
using namespace std;
bool prefix_suffix_array(vector<int> &v){
    int total_sum=0;
    int prefix_sum =0;
    for(int i=0;i<v.size();i++){
        total_sum += v[i]; 
    }
    for(int i=0;i<v.size();i++){
        prefix_sum += v[i] ;
        int suffix_sum = total_sum-prefix_sum;
        if(prefix_sum==suffix_sum){
            return true;
        }
    }

    return false;
}
int main(){
    int n;
    cout<<" Enter the size :";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];

    }
    cout<<prefix_suffix_array(v);

    
    return 0;
}