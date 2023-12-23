/*                                  update Bit
Quest : n = 0101 i.e. 5 ; Suppose we need to update bit at position , i=1 (position) to 1.
Ans : step 1) It is a combination of Clear Bit & Set Bit  */

#include<iostream>
#include<string>
using namespace std;

int updateBit(int n, int pos , int value){
    int mask = ~(1<<pos);
    n = (n & pos);
    return ((n | (value<<pos))) ;

    
}

int main(){
   
    cout<<updateBit(5,1,1);
    return 0;
    
}