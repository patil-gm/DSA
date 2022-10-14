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

int firstoccurence(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=-1;
    int ans=-1;
    
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int lastoccurence(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=-1;
    int ans=-1;
    
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

signed main(){
    fastio
    ll t;
// cin>>t;
   int arr[10]={0,1,2,3,3,3,3,3,7,9};
   cout<<"firstoccurence of 3 "<<firstoccurence(arr,10,3)<<endl;
   cout<<"lastoccurence of 3 "<<lastoccurence(arr,10,3)<<endl;
    return 0;
}