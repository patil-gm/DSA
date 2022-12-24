/*

1. any no XOR with zero (0) gives the same number
X^0 = X

2. any no XORed with itself gives 0
X^X = 0 

3.swapping no using XOR (without using extra varible )
*/
int a,b;

a = a^b
b = b^a  --> {(b^ (a^b) ) => a} 
a = a^b  --> {((a^b) ^a ) => b }

// now a becomes b  and b becomes a i.e. swapped 
