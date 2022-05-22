#include "bits/stdc++.h"
using namespace std;

int search(vector<int> &nums, int target)
{
    int lo=0,hi=nums.size()-1;
    int key=nums[hi];
    if(lo==hi)
    {
        if(nums[lo]==target)
        {
            return lo;
        }
    }

    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
       else if(nums[mid]>key)
        {
            if(target>key and target<nums[mid])
            {
                hi=mid-1;

            }
            else if(target<key and target<nums[lo])
            {
                lo=mid+1;
                
            }
        }
        else
        {
            if(nums[mid]<key)
            {
                if(nums[mid]>target)
                {
                    hi=mid-1;
                }
                else
                {
                    lo=mid+1;
                }
            }
        }
    }
   if(nums[lo]==target)
   {
       return lo;
   }
   else
   {
       return -1;
   }
}
int main()
{
    vector<int> nums={4,5,6,7,0,1,2};

    cout<<search(nums,0);
}