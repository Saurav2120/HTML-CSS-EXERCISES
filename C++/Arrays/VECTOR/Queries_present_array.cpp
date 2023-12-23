//Given Q queries, check if the given number is present in the array or not .
//note: Value of all the elements in the array is less than to 10 to the power 5.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the size:";
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    const int N = 1e5 + 10;

    //Making frquency array:
    vector<int> freq(N,0);//here size is N & intialize with 0.
    
    for(int i=0;i<n;i++){
        freq[v[i]]++;
        cout<<freq[v[i]];
    }
    
    cout<<"Enter Queries:";
    int q;
    cin>>q;

    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<"No.of times : "<<freq[queryelement]<<endl;

    }
    return 0;
}