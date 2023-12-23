#include<iostream>
using namespace std;

string RemovingOccurence(string s, int idx , int n){
    if(idx == n){
        return "";
    }
    string curr = "";
    curr += s[idx];


    return (((s[idx] == 'a')?"":curr) + RemovingOccurence(s,idx+1,n));
}

int main(){
    string s;
    cout<<" Enter the string : ";
    cin>>s;
    int n = s.size();
    
    cout<<"After Removing the element : "<<RemovingOccurence(s,0,n);
    return 0;
}