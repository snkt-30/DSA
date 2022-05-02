#include "bits/stdc++.h"
using namespace std;

vector<int> sortArray(vector<int> &nums)
{

    for (int i = 1; i < nums.size(); i++)
    {
        int j = i - 1;
        int key=nums[i];
        while (j >= 0 and key < nums[j])
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

int main()
{
    vector<int> nums = {5,1,1,2,0,0};
    sortArray(nums);
    for (auto x : nums)
    {
        cout << x;
    }
}