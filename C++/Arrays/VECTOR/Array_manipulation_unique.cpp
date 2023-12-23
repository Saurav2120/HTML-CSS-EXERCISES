//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{2,3,1,7,3,2,4,1};
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                v[i]=v[j]=-1;
            }
        }
    }
   
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            cout<<"Unique Nummber : "<<v[i]<<endl;;
        }
    }
    
return 0;
}