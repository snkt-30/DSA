#include "bits/stdc++.h"
using namespace std;

const int N = 1e5 + 10;


// i dont know why this sol gives me runtime error if any one get pls comment for help
void productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    int left[N], right[N];
    vector<int> ans(n);

    if (nums.empty())
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            left[i] = 0;
        }
        else if (i == 1)
        {
            left[i] = nums[0];
        }
        else
        {
            left[i] = (left[i - 1] * nums[i - 1]);
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            left[i] = 0;
        }
        else if (i == n - 2)
        {
            left[i] = nums[n - 1];
        }
        else
        {
            left[i] = (left[i + 1] * nums[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            ans[i] = max(left[i], right[i]);
        }
        else
        {
            ans[i] = (left[i] * right[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}


// optimized solution

vector<int> func(vector<int> &nums)
{

    int n = nums.size();
    int fromBegin = 1;
    int fromLast = 1;
    vector<int> res(n, 1);

    for (int i = 0; i < n; i++)
    {
        res[i] *= fromBegin;
        fromBegin *= nums[i];
        res[n - 1 - i] *= fromLast;
        fromLast *= nums[n - 1 - i];
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    productExceptSelf(nums);
}