//Given an array of integers of size n. 
//Answer q queries where you need to print the sum of values in a given range of indices from l to r(both included).
//Note: The values of l and r in queries follow 1-based indexing.


#include<iostream>
#include<vector>
using namespace std;

void range_sum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<" Enter the Query :";
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans =0;
        //ans = prefix_sumarray[r]-prefix_sumarray[l-1]
        ans = v[r]-v[l-1];
        cout<<ans;
    }

}
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    range_sum(v);


    return 0;
}
