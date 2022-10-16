/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. 
Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below. 
Note that 1 does not map to any letters.

0 = nothing 
1 = nothing
2 = a,b,c
3 = d,e,f
4 = g,h,i
5 = j,k,l
6 = m,n,o
7 = p,q,r,s
8 = t,u,v
9 = w,x,y,z



Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Input: digits = ""
Output: []

Input: digits = "2"
Output: ["a","b","c"]

*/

// patil_gm

class Solution {
  
   void solve(vector<string> &ans,string maparr[],int index,string output,string digits){
         if(index>=digits.length()){
             ans.push_back(output);
             return;
         }
         int number=digits[index]-'0';
         string value = maparr[number];
         index++;
         
         for(int i=0;i<value.length();i++){
             output.push_back(value[i]);
             solve(ans,maparr,index,output,digits);
             output.pop_back();
         }
         
     }
    
public:
  
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output="";
        if(digits.length()==0)return ans;
        int index=0;
        string maparr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(ans,maparr,index,output,digits);
        return ans;
        
    }
};
