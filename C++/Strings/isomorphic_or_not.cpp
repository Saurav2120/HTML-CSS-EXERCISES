//Given two strings s and t,determine if they are isomorphic i.e. one to one mapping
//input : s= "egg", t="add"
//output: yes

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isIsomorphic(string str1, string str2){
    vector<int> s1(128,-1);
    vector<int> s2(128,-1);
    if(str1.length()!=str2.length()){
        return false;
    }
    for(int i=0;i<str1.size();i++){
        if(s1[str1[i]]!=s2[str2[i]]){
            return false;
        }
        s1[str1[i]]=s2[str2[i]]=i;
    }
    return true;

}

int main(){
    string str1,str2;
    cin>>str1>>str2;

    if(isIsomorphic(str1,str2)){
        cout<<"Strings are Isomorphic";
    }
    else{
        cout<<"Strings are not Isomorphic";
    }

    return 0;
}