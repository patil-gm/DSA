//patil_gm

/*
time complexity : O(n)
space : O(1)
*/

ll kadans(vector<ll> arr){
    ll n=arr.size();
    ll maxsum=arr[0];
    ll sum=0;

    for(ll i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
       
        }
        // sum+=arr[i];
        else maxsum= sum>maxsum ? sum:maxsum;
        // cout<<arr[i]<<" "<<maxsum<<endl;
    }

   return maxsum;
}

signed main(){
    fastio
    ll t;
cin>>t;
vec(arr,t);
ll ans = kadans(arr);

cout<<ans<<endl;
    return 0;
}


// add this code before above code
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
