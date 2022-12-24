#include<iostream>
using namespace std;

// divide by 2
int num=4;
num>>1;

// multiply by two
num<<1;

// checking even no
bool checkEven(int n){
    if(n&1){
        cout<<"ODD/n";
        return false;
    }
        cout<<"EVEN\n";
        return true;
    
}

/* binary of chars 

A -> 01000001
a -> 01100001

B -> 01000010
b -> 01100010

*/

// lower case to upper case char 
char upper ='A';
char lower = upper | (1<<5);   //in lower case the 5th bit set (1)
char lower = upper | ' ';      // do or with the whitespace (' ')

// upper case to lower case 
char lower ='a'; 
char upper = lower & (~(1<<5));  //int upper case the 5th bit is unset (0)
char upper = lower & '_';        // do and with underscore ('_')

// to clear all LSB upto ith bit
int a=59;
int i=4;
int b = a & ( ~( 1<< (i+1) ) -1) ;


// to clear all MSB upto ith bit
i=3;
int c= a & ((1<<(i+1))-1);


// finding the is power of two 
bool isPowerOfTwo(int n)
{
   if(n&(n-1)){
    cout<<"not power of 2\n";
    return false;
   }
   cout<<"power of 2\n";
   return true;

}


//   n = 00001000000
// n-1 = 00000111111
// if n is power of 2 then (n&(n-1)) will be 0;