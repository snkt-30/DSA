#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    vector<vector<int>> ans;
    int n = nums.size();
    set<vector<int>> temp;
    for (int i = 0; i < n - 1; i++)
    {
        unordered_set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int x = -(nums[i] + nums[j]);
            if (s.find(x) != s.end())
            {
            temp.insert({x, nums[i], nums[j]});
            s.erase(nums[j]);
            }
            else
            {
                s.insert(nums[j]);
            }
        }
        auto x=*temp.begin();
        ans.push_back(x);
        temp.erase(x);
        
    }
    return ans;
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
    for (int i=0; i < m; i++)
    {
        
        for (auto x : ans[i])
        {
            cout << x << " ";
        }
        cout<<endl;
    }
}