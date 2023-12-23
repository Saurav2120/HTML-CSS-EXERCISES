#include<iostream>
#include<vector>
using namespace std;

void Bubble_sort(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
        
    }
    return;

}
int main(){
    int n;
    cout<<"Enter the Size<< ";
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    Bubble_sort(v);
    for(int j=0;j<n;j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    return 0;
}