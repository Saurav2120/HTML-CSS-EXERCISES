#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void RotateArray(vector<vector<int>> &arr, int n, int m){
    for(int i =0; i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    RotateArray(arr,n,m);
    cout<<"Roatated Array after 90 degree turn is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;


}