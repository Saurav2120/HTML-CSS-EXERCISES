/*Given a strings str, sort the given string.
Constraints: The string will contain only alphabetical characters from a-z.

Input 1: "codingwallah"
Output 1: "aacdghillnow"

Input 2: "star"
Output 2: "arst"*/

#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    for(int i =0;i< str.size();i++){
        for(int j=i+1;j<str.size();j++){
            if(str[i]>str[j]){
                //swap(str[j],str[i]);
                char temp=str[i];
                str[i]= str[j];
                str[j]= temp;
            }
        }
    }
    cout<<str;
return 0;
}

