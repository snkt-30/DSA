#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define nl '\n'

#define vi vector<int>
#define vii vector<vector<int>>
#define vpi vector<pair<int, int>>
#define sv set<vector<int>>

int maxProduct(vector<int> &nums)
{

    int pro = 1;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= 0)
        {

            pro = 0;
        }
        pro *= nums[i];
        ans = max(ans, pro);
    }
    return ans;
}

int main()
{
    vi nums = {2, 3, -2, 4};
    cout << (maxProduct(nums));
}
