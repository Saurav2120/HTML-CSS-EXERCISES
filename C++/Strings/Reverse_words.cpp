//Reverse words in a given string.
//input: I.Like.This.Program
//output: Program.This.Like.I

#include<iostream>
#include<string>
using namespace std;

string ReverseWord(string str){
    int len=str.length()-1,n;
    string s;
    for(int i = len;i>=0;i--){
        if(str[i]=='.'){
            n=len-i;
            len=i-1;
            s.append(str.substr(i+1,n));
            s.append(".");
        }  
    }
    s.append(str.substr(0,len+1));
    return s;

}

int main(){

    string str;
    cin>>str;

    cout<<"After Reversing :  "<<ReverseWord(str);
    return 0;

}