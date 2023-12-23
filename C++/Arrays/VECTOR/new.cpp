#include<iostream>
#include<vector>
using namespace std;
int Pair_sum(vector<int> &v){
    int count=0;
    int x;
    cout<<"Enter the value : ";
    cin>>x;
    int i=0;
    int left_ptr =0;
    int right_ptr=v.size()-1;
    while(left_ptr< right_ptr){
        if(v[left_ptr] + v[right_ptr] == x){
            count++;
        }
        else if(v[left_ptr]+ v[right_ptr] <x){
            left_ptr++;
        }
        else{
            right_ptr--;

        }
    }
    cout<<count;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    Pair_sum(v);
    
    return 0;

}