#include<iostream>
#include<string>
using namespace std;

int LongestMaxOnes(string str, int k){
    int start =0,end=0,zero_count=0,max_length=0;
    for(end = 0;end<str.size();end++){

        if(str[end]=='0'){
            zero_count++;
        }

        while(zero_count>k){
            if(str[start]=='0'){
                zero_count--;
            }
            start++;
        }

        max_length=max(max_length,end-start+1);
    }
    return max_length;
}

int main(){
    string str;
    cout<<"Enter the binary items : ";
    cin>>str;

    int k;
    cout<<"Enter the no. of flips : ";
    cin>>k;

    cout<<"Consecutive Max Ones after flipping is : "<<LongestMaxOnes(str,k);

    return 0;
}