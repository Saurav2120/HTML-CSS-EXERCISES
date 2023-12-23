// Find the difference between the sum of elements at even indice to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    cout<<"enter the array :";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int sum =0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){//Indices means check even & odd place
            sum+=v[i];
        }
        else{
            sum -= v[i];
        }

    }
    cout<<"total : "<<sum;
    return 0;
}