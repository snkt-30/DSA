#include "bits/stdc++.h"
using namespace std;

// 116ms
vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i == 0 || (i > 0 and nums[i] != nums[i - 1]))
        {
            int lo = i + 1, hi = nums.size() - 1, sum = 0 - nums[i];
            while (lo < hi)
            {
                if (nums[lo] + nums[hi] == sum)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[lo]);
                    temp.push_back(nums[hi]);

                    ans.push_back(temp);

                    while (lo < hi and nums[lo] == nums[lo + 1])
                        lo++;
                    while (lo < hi and nums[hi] == nums[hi - 1])
                        hi--;

                    lo++;
                    hi--;
                }
                else if (nums[lo] + nums[hi] < sum)
                {
                    lo++;
                }
                else
                {
                    hi--;
                }
            }
        }
    }

    return ans;
}

// 96ms
vector<vector<int>> opthreeSum(vector<int> &num)
{

    vector<vector<int>> res;

    std::sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++)
    {

        int target = -num[i];
        int front = i + 1;
        int back = num.size() - 1;

        while (front < back)
        {

            int sum = num[front] + num[back];

            if (sum < target)
                front++;

            else if (sum > target)
                back--;

            else
            {
                vector<int> triplet = {num[i], num[front], num[back]};
                res.push_back(triplet);

                while (front < back && num[front] == triplet[1])
                    front++;

                while (front < back && num[back] == triplet[2])
                    back--;
            }
        }

        while (i + 1 < num.size() && num[i + 1] == num[i])
            i++;
    }

    return res;
}

int main()
{
    vector<int> ar;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.push_back(x);
    }

    vector<vector<int>> ans = threeSum(ar);

    int m = ans.size();
    for (int i = 0; i < m; i++)
    {

        for (auto x : ans[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}