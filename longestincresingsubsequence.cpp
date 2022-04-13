#include"bits/stdc++.h"
using namespace std;

const int N=1e5+10;
vector<int> ar(N);

int dp[N];

// Brute force approach 
int lisbrute(int i)
{
    int ans=1;
    for(int j=0;j<i;j++)
    {
        if(ar[i]>ar[j])
        {
            ans=max(ans,lisbrute(j)+1);
        }
    }
    return ans;
}

// Applying DP to decrease time complexity

int lisdp(int i)
{
    int ans=1;
    if(dp[i]!=-1) return dp[i];

    for(int j=0;j<i;j++)
    {
        if(ar[i]>ar[j])
        {
            ans=max(ans,lisbrute(j)+1);
        }
    }
    return dp[i]=ans;

}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
        // brute force
        ans=max(ans,lisbrute(i));
        
        // dp applied
        //   ans=max(ans,lisbrute(i));

    }

    cout<<ans;
}
