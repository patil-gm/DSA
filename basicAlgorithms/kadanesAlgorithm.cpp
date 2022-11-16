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
        if(sum<0) sum=0;
        else maxsum= sum>maxsum ? sum:maxsum;

    }

   return maxsum;
}





