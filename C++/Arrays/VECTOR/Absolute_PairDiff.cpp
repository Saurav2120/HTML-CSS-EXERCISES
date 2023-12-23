#include<iostream>
#include<vector>
using namespace std;

bool Pair_difference(vector<int> &v){
    int left_ptr=0;
    int right_ptr = left_ptr+1;
    int x;
    cout<<" Enter the value :";
    cin>>x;
    while(left_ptr<v.size() && right_ptr<v.size()){
        if(abs(v[left_ptr] - v[right_ptr]) == x){
            return true;
        }
        else if(abs(v[left_ptr] - v[right_ptr]) < x){
            right_ptr++;

        }
        else{
            left_ptr++;

        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){

        cin>>v[i];
    }
    if(Pair_difference(v)){
        cout<<"Yes";
    }
    else{

        cout<<"No";
    }
    return 0;

}