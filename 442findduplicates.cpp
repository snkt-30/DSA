#include "bits/stdc++.h"
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    unordered_map<int,int> fr;
vector<int> ans;
    for(int i=0;i<nums.size();++i)
    {
        fr[nums[i]]++;

        if(fr[nums[i]]==2)
        {
            ans.push_back(nums[i]);
        }
    }

    return ans;
}

// impressive approach 
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i ++){
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            if(nums[abs(nums[i])-1] > 0) res.push_back(abs(nums [i]));
        }
        return res;
    }

    

int main()
{
    vector<int> nums={1,1,2};

    vector<int> ans=findDuplicates(nums);

    for(auto x: ans)
    {
        cout<<x<<" ";
    }
}