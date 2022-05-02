#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define nl '\n'

#define vi vector<int>
#define vii vector<vector<int>>
#define vpi vector<pair<int, int>>
#define sv set<vector<int>>

vector<int> sortArrayByParity(vector<int> &nums)
{
int lo=0,hi=nums.size()-1;
    while(lo<=hi)
    {
        if(nums[lo]%2==0)
        {
            lo++;
        }
        else
        {
            swap(nums[lo],nums[hi]);
            hi--;
        }
    }
}

int main()
{
    vi nums={3,1,2,4};
    
    sortArrayByParity(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}
