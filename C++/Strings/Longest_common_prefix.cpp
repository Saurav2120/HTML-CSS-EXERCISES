#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string> &str){
    int len=0,flag=0,count=0,min=INT_MAX;
    string s;
    for(int i=0;i<str.size();i++){
        len=str[i].length();
        if(len<min){
            min=len;
            s=str[i];
        }
    }

    for(int i=0;i<min;i++){
        for(int j=0;j<str.size();j++){
            if(str[j][i]!=s[i]){
                flag=1;
                break;
            }
        }

        if(flag==1){
            break;
        }
        count++;
        
    }

    if(count==0){
        return "No Common prefix";
    }
    else{
        return s.substr(0,count);
    }

}

int main(){
    int n;
    cout<<"No. of Strings : ";
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    cout<<"Common prefix is : "<<LongestCommonPrefix(str);


}