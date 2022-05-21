#include "bits/stdc++.h"
using namespace std;

// runtime 147ms
int maxArea(vector<int> &h)
{
    ios_base::sync_with_stdio(false);
    int lo = 0, hi = h.size() - 1;
    int curr = 0;
    int maxarea = -1;
    while (lo < hi)
    {
        if (h[lo] < h[hi])
        {

            maxarea = max(h[lo] * (hi - lo), maxarea);
            lo++;
        }
        else
        {

            maxarea = max(h[hi] * (hi - lo), maxarea);
            hi--;
        }
    }
    return maxarea;
}

// run in 83ms
int maxAreaoptimized(vector<int> &height)
{
    ios_base::sync_with_stdio(false);
    int maxArea = 0, area = 0;
    int l = 0, r =height.size() - 1;
    while (l < r)
    {
        if (height[l] < height[r])
        {
            area = height[l] * (r - l);
            l++;
        }
        else
        {
            area = height[r] * (r - l);
            r--;
        }

        maxArea = max(area, maxArea);
    }
    return maxArea;
}
int main()
{
    vector<int> nums = {1, 1};
    cout << maxArea(nums);
}