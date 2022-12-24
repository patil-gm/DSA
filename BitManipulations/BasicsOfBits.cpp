#include<iostream>
using namespace std;

// printing  binary no
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
/* you can take i value as your convinience */

int num1 = 45;
// SET BIT
// to set a perticular bit is easy just do 1<<i (i is the no of bit) and do '|' opration
 num1 | (1<<i);


// INVERT BINARY
// USE ~ OPERATOR    ~(101) -> 010 
(~num1)

// UNSET BIT
//suppose I have to unset the i'th bit just left shift 1 to ith times (1<<i) then use ~ opration do '&' operation
num1 & (~(1<<i))

// TOGGELE BIT
(num1 ^ (1<<i))


/* to get direct set bit count */
__builtin_popcount(45); //for int
__builtin_popcountll(1LL<<34); //for ll

// the no wich comes just before the power of two have all bits set (1)
/*  4 -> 100
    3 ->  11

    16-> 10000
    15->  1111

*/
// TO INVERT THE BINRY NO USE ~ OPERATOR    101 -> 010 
// this useful in setting the bits 
// it will left shift 1 to ith times (1<<i) then use ~ opration do '&' operator;
