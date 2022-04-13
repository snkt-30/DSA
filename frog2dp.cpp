#include"bits/stdc++.h"
using namespace std;

const int N=1e6+10;
int dp[N];
int h[N];
int k;

int func(int i)
{
    if(i==0)
    {
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int cost=INT_MAX;

    for(int j=1;j<=k;j++)
    {
        if(i-j>=0)
        {
            cost=min(cost,func(i-j)+abs(h[i]-h[i-j]));
        }

    }
    

    return dp[i]=cost;
}


int main()
{
 memset(dp,-1,sizeof(dp));
 int n;
cin>>n;
cin>>k;
for (int i=0;i<n;i++)
{
    cin>>h[i];
}
cout<<func(n-1);
}