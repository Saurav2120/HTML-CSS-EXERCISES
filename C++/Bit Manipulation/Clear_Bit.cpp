/*                                   Clear Bit
Quest : n = 0101 i.e. 5 ; Suppose we need to clear bit at position , i=2 (position)
Ans : step 1) left shift i.e. 1<<i = 0100 , left shifted 1 at position 1 as per input
      step1.1)Now, perform complement i.e. let mask = ~(0100) = 1011
      step 2) Now, perform OR OPERTn. i.e. (0101 & 1011) = 0001 ->result = 1
      stpe 3) if n & mask , then result is 0. */
      11111111111111111111111111111101

#include<iostream>
#include<string>
using namespace std;

int ClearBit(int n, int pos){
    int mask = ~ (1<<pos);
    return((n & mask));
}

int main(){
   
    cout<<ClearBit(5,2);
    
}