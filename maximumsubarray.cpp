#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define nl '\n'

#define vi vector<int>
#define vii vector<vector<int>>
#define vpi vector<pair<int, int>>
#define sv set<vector<int>>

int maxSubArray(vector<int> &nums)
{
    int mx = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currsum += nums[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        mx = max(currsum, mx);
    }
    return mx;
}

int main()
{
    vi nums = {5, 4, -1, 7, 8};
    cout << maxSubArray(nums);
}
