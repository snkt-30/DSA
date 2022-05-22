#include"bits/stdc++.h"
using namespace std;

string largestNumber(vector<int>&nums)
{
    string ans="";
    for(int i=0;i<nums.size();i++)
    {
        string temp=to_string(nums[i]);
        ans+=temp;
    }

    sort(ans.begin(),ans.end(),greater<char>());

    return ans;


}
int main()
{
    vector<int> nums={3,5,9,30,34};

    cout<<largestNumber(nums);

}