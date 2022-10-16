/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Input: n = 1
Output: ["()"]
*/

//patil_gm 🚀👨🏻‍💻

void getstrings(vector<string> &ans,ll n,ll open,string s){
      if(n==0 && open == 0)ans.push_back(s);

      if(n>0) getstrings(ans,n-1,open+1,s+"(");
      if(open>0) getstrings(ans,n,open-1,s+")");

}

vector<string> solve(ll n){
    vector<string> ans;
    ll open =0;
    getstrings(ans,n,open,"");
    return ans;
}

signed main(){
    fastio
    ll n;
    cin>>n;

    // vector<string> ans= solve(n);

    vector<string> ans=solve(n);

    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}


//add this part before the above code
//patil_gm 🚀👨🏻‍💻
#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define itoc(c)  ((char)(((int)'0')+c))
#define ctoi(c)  ((int)(((int)c)-'0'))
#define endl '\n'
#define ll long long
#define lld long long double 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define vec(ver, n)  vector<ll> ver(n); for (ll i = 0; i < n; i++) cin >> ver[i];
#define pii pair<ll,ll>
#define fr first
#define sc second
const long long INF=1e18;
const int32_t mod=1e9+7;
const int32_t MM=998244353;
