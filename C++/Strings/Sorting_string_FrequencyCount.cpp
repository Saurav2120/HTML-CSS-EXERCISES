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

string Count_SortString(string str){
    //Making a Frequency array:
    vector<int> freq(26,0);

    //storing frequencyy of every character in string 
    for(int i=0;i<str.length();i++){
        int index = str[i]-'a';
        freq[index]++;
    }

    //Create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';
        }
    }
    return str;

}

int main(){
    string str;
    cin>>str;
    
    cout<<Count_SortString(str);

    return 0;
}