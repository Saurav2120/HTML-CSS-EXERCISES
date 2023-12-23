#include<iostream>
using namespace std;

bool Palindrome(int n, int* temp){
    if(n>=0 & n<=9){
        int Last_digit= *temp % 10;
        *temp = *temp / 10;
        return (n == Last_digit);
    }
    bool ans = (Palindrome(n/10, temp) & (n%10 == ((*temp)%10)));
    *temp = (*temp)/10;
    return ans;

}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int orig = n;
    int* temp = &orig;
    cout<< Palindrome(n,temp);
}