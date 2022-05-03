#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define nl '\n'

#define vi vector<int>
#define vii vector<vector<int>>
#define vpi vector<pair<int, int>>
#define sv set<vector<int>>

int findUnsortedSubarray(vector<int> &nums)
{
    int ans=0;
    int n=nums.size();
    vi mx(n);
    vi mn(n);

int mnele=INT_MAX;
int mxele=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        mnele=min(mnele,nums[i]);
        mn[i]=mnele;
    }

    for(int i=0;i<=n-1;i++)
    {
        mxele=max(mxele,nums[i]);
        mx[i]=mxele;
    }

int st=0,end=n-1;
    while(st<n and nums[st]<=mn[st])
    {
        st++;
    }
    
    while(end>st and nums[end]>=mx[end])
    {
        end--;
    }

    ans=(end-st)+1;
    return ans;
}

int main()
{
    vi nums = {1,2,3,4};

    cout << findUnsortedSubarray(nums) << nl;
}
