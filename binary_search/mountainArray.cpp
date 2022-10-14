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

int findPeakIndex(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=-1;
    while(s<e){
        mid=(s+e)/2;
       if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
             e=mid;
        }
    }
    return s;
}
 
signed main(){
    fastio
    ll t;
// cin>>t;
   int arr[10]={10,12,19,23,45,56,67,9,5,3};
//    cout<<"hello ji"<<endl;
   cout<<"peak index : "<<findPeakIndex(arr,10)<<endl;

    return 0;
}

