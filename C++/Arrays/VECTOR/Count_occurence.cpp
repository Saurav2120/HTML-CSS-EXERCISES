//Count the number of occurence of a particular element x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    cout<<"Enter the elements: ";
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int occurence =0;
    for(int i=0;i<v.size();i++){
        if(key==v[i]){
            occurence++;
        }

    }
    cout<<"No.of occurences : "<<occurence;
return 0;
}