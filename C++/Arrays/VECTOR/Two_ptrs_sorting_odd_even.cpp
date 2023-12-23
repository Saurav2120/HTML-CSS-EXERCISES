//Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers. 
//The relative order of odd or even integers does not matter.Return any array that satisfies the condition.

#include<iostream>
#include<vector>
using namespace std;

void sort_even_odd(vector<int> &v){
    int left_ptr = 0;
    int right_ptr =v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;

        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2!=0){
            right_ptr--;
        }

    }
}
int main(){
    int n;
    cout<<"Enter the size :";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort_even_odd(v);
    cout<<" Sorted Array is :";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}