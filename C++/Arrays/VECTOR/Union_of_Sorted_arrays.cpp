#include<iostream>
#include<vector>
using namespace std;

vector<int> union_two_sortedArray(vector<int> &v1, vector<int> &v2){
    int n= v1.size();
    int m = v2.size();
    int i=0,j=0,k=0;


    vector<int> result(n+m);
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            result[k]=v1[i];
            k++;
            i++;
        }
        else{
            result[k]=v2[j];
            k++;
            j++;
        }
            
    }
    while(i<n){
        result[k] =v1[i];
        k++;
        i++;

    }
    while(j<m){
        result[k]=v2[j];
        k++;
        j++;
    }
    return result;
    
  




}
int main(){
    int n,m;
    cout<<"Enter the size of First Array : ";
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    cout<<"Enter the size of Second Array : ";
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    
    vector<int> result=union_two_sortedArray(v1,v2);
    for(int t=0;t<m+n;t++){
        cout<<result[t]<<" ";
    }
    



    return 0;
}