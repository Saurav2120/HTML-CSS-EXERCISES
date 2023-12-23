/*                                   Set Bit
Quest : n = 0101 i.e. 5 ; Suppose we need to set bit at position , i=1 (position)
Ans : step 1) left shift i.e. 1<<i = 0010 , left shifted 1 at position 1 as per input
      step 2) Now, perform OR OPERTn. i.e. (0101 & 0010) = 0111 ->result =7
      stpe 3) If result got is 1 return 1 else return 0 i.e. if n | (1<<i), then result is 7. */

#include<iostream>
#include<string>
using namespace std;

int SetBit(int n, int pos){
    return((n | (1<<pos)) );
}

int main(){
   
    cout<<SetBit(5,1);
    
}