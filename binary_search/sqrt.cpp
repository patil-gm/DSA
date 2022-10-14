//patil_gm
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

ll solve(ll x){
     if(x==0)return 0;
        double s=1;
        double e=x;
        double mid;
        while(s<=e){
            mid=(s+e)/2;
            long long sqr=mid*mid;
            if(sqr==x){
                break;
            }
            else if(sqr>x){
                e=mid;
            }
            else{
                s=mid;
            }
        }
        int ans=mid;
        return ans;
}

signed main(){
    fastio
    ll t;
    cin>>t;
    cout<<solve(t)<<endl; 
    return 0;
}
