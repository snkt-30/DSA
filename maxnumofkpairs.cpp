#include "bits/stdc++.h"
using namespace std;

// O(Nlog(N)) approach brute force approach
int maxOperations(vector<int> &nums, int k)
{
    int n = nums.size() - 1;
    int hi = n, lo = 0;
    sort(nums.begin(), nums.end());
    int cnt = 0;

    while (lo < hi)
    {
        // int sum = nums[lo] + nums[hi];
        if (lo != hi)
        {
            int sum = nums[lo] + nums[hi];
            if (sum == k)
            {
                cnt++;
                hi--;
                lo++;
            }
            else if (sum > k)
            {
                hi--;
            }
            else
            {
                lo++;
            }
        }
    }
    return cnt;
}

// O(N) approach to solve the problem

int maxOperations(vector<int> &nums, int k)
{
    unordered_map<int, int> Map;
    for (auto &num : nums)
        Map[num]++; // count freq of nums
    int ans = 0;

    for (auto it = Map.begin(); it != Map.end(); ++it)
    {
        int num = it->first, count = it->second;
        if (k - num == num)
            ans += count / 2; // if num is half of k add half of it's count in ans
        else if (Map.count(k - num))   
        {                                    
            int Min = min(count, Map[k - num]
            ans += Min;
            Map[num] -= Min;
            Map[k - num] -= Min;
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 4};
    cout << maxOperations(nums, 3);
}