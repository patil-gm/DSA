/*
Given two integers left and right that represent the range [left, right], 
return the bitwise AND of all numbers in this range, inclusive.
*/

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int len = 0;
        while (right != left) { 
            right = right>>1;  
            left = left>>1; 
            len++; 
        }
        return right << len;
    }
};

