/*                                  Get Bit
Quest : n = 0101 i.e. 5 ; Suppose we need to get bit at position , i=2 (position)
Ans : step 1) left shift i.e. 1<<i = 0100 , left shifted 1 at position 2 as per input
      step 2) Now, perform AND OPERTn. i.e. (0101 & 0100) = 0100 ->result
      stpe 3) If result got is 1 return 1 else return 0 i.e. if n & (1<<i)!=0, then bit is 1. */

#include<iostream>
#include<string>
using namespace std;

int GetBit(int n, int pos){
    return((n & (1<<pos)) !=0 );
}

int main(){
   
    cout<<GetBit(5,0);
    
}