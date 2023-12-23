//Find the total number of *PAIRS* in the Array whose sum is equal to the given value x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{1,4,3,7,6};
    int target_sum =7;
    int pairs=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target_sum){
                pairs++;
            }
        }
    }
    cout<<pairs;
    return 0;
}