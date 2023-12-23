//Find the last occurence of an element x in a given array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    cout<<"Enter the elements: ";
    for(int i =0;i<6;i++){
        cin>>v[i];
    }
    int key;
    cout<<"Enter the key:";
    cin>>key;
    int occurence =-1;

    //ONE WAY:-
    for(int i =0;i<6;i++){
        if(key==v[i]){
            occurence = i;
        }
    }

    //ANOTHER WAY:-
    for(int i = v.size()-1;i>=0;i--){
        if(key==v[i]){
            occurence = i;
            break;
        }
    }
    cout<<occurence;
    
    return 0;
}