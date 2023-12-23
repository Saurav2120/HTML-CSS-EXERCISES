//Find the Second largest Value in a given array.
#include<iostream>
#include<vector>
#include<climits>//for using INT_MIN & INT_MAX
using namespace std;
int second_largest_ele(vector<int> v){
    int largest=v[0];
    int second_large = INT_MIN;
    for(int i = 1;i<v.size();i++){
        if(v[i]>largest){
            second_large = largest;
            largest = v[i];
        }
        else if(v[i]>second_large && v[i]<largest){
            second_large= v[i];
        }

    }
    return second_large;


}

int main(){
    vector<int> v{2,4,6,-1,7,5,7};
    int result = second_largest_ele(v);
    cout<<result;
    return 0;
}