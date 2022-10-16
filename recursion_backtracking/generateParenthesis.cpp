/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Input: n = 1
Output: ["()"]
*/

// patil_gm

class Solution {
    
    vector<string> ans;
    
    void getP(int n, int open, string s) {
      
        if (n == 0 && open == 0) ans.push_back(s); //no open brackets to use  && no backet is remain open        
        if (n > 0) getP(n-1, open+1, s+"(" ); // adding open bracket to sting and -1 from n and +1 in the opened brackerts
        if (open > 0) getP(n, open-1, s+")" ); // adding closing bracket -1 from from opened brackets

    }
    
public:
    vector<string> generateParenthesis(int n){
        getP(n, 0, "");
        return ans;
    }

};
