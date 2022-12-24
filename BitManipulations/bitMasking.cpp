// bitmasking basically used to find the common things between two item for a limited interval
// this is done by setting the bits of perticular item no
// e.g.  int can hold 31 things
//       long long can hold 63 things





// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
string s1,s2;
int ans=1e9; int n;

void rec(string s1,int level){
    if(s1==s2){
        cout<<s1<<endl;
        ans = min(ans,level-2);
        return;
    }

    for(int i=0; i<= n-level; i++){
        reverse(s1.begin()+i, s1.begin()+i+level);
        // cout<<s1<<endl;
        rec(s1,level+1);
        reverse(s1.begin()+i, s1.begin()+i+level);
    }
}

int main(){

  cin>>s1>>s2;
  n = s1.size();
  rec(s1,2);
  if(ans==1e9)
      cout<<"-1"<<endl;
  else
  cout<<ans<<endl;
}