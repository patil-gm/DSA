// find the length of the longest common subsequence

string s1,s2;
cin>>s1>>s2;
int n=s1.length();
int m=s2.length();

vector<vector<ll> > dp(n+1,vector<ll>(m+1,0));

for(int i=1,i<n+1;i++){
    for(int j=1,j<m+1;j++){
        if(s2[i-1]==s1[j-1])dp[i][j]=1+dp[i-1][j-1];
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
}

cout<<dp[n][m]<<endl;
