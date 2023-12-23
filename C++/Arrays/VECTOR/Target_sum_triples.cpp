#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{3,1,2,4,0,6};
    int target_sum = 5;
    int triplet=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                if((v[i]+v[j]+v[k])==target_sum){
                    triplet++;
                }
            }
        }
    }
    cout<<triplet;
return 0;

}