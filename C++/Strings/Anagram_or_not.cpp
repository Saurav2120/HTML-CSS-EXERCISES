/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.
Constraints: Strings and t will only contain lowercase alphabetical characters.

Input 1: s = "anagram", t = "nagaram"
Output 1: yes

Input 2:s="bank", t = "atm"
Output 2: no*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isAnagram(string str1, string str2){

    //creating a frequency array:
    vector<int> freq(26,0);

    if(str1.length()!=str2.length()){
        return false;
    }
    else{
        for(int i=0;i<str1.length();i++){
            freq[str1[i]-'a']++;
            freq[str2[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }

    
}
int main(){
    string str1, str2;
    cin>>str1>>str2;

    if(isAnagram(str1,str2)){
        cout<<"Strings are Anagram";
    }
    else{
        cout<<"Strings are not Anagram";

    }
    return 0;
}