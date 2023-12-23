//Sort an array consisting of only 1's and 0's.
#include<iostream>
#include<vector>
using namespace std;

void sorting_zero_one(vector<int> &v){
    int left_pointer = 0;
    int right_pointer = v.size() -1;
    while(left_pointer < right_pointer){
        if(v[left_pointer] == 1 && v[right_pointer] == 0){
            v[left_pointer++] =0;
            v[right_pointer--]=1;
        }
        if(v[left_pointer]==0){
            left_pointer++;
        }
        if(v[right_pointer]==1){
            right_pointer--;
        }
    }
    

}
int main(){
    cout<<"Enter The Size :";
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sorting_zero_one(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
