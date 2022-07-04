#include "bits/stdc++.h"
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        int j;
        for (j = 0; j < strs[i].size(); j++)
        {
            if (ans[j] != strs[i][j])
                break;
        }
        ans = ans.substr(0, j);
        if (ans == "")
            return ans;
    }

    return ans;
}

// 88ms
int findMinLength(vector<string> &strs, int n)
{
    int min = strs[0].length();

    for (int i = 1; i < n; i++)
        if (strs[i].length() < min)
            min = strs[i].length();

    return (min);
}

string longestCommonPrefixop(vector<string> &strs)
{
    int n = strs.size();

    string result = "";
    char curr;
    int mn = findMinLength(strs, n);

    for (int i = 0; i < mn; i++)
    {
        curr = strs[0][i];
        {
            for (int j = 1; j < n; j++)
            {
                if (curr != strs[j][i])
                {
                    return result;
                }
            }
            result += curr;
        }
    }
    return result;
}
int main()
{
    vector<string> nums = {"flower", "flow", "flying"};

    string ans = longestCommonPrefixop(nums);
    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i];
    }
}