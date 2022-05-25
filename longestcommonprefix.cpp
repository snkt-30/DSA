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
    int findMinLength(vector<string>& strs, int n)
{
    int min = strs[0].length();
 
    for (int i=1; i<n; i++)
        if (strs[i].length() < min)
            min = strs[i].length();
 
    return(min);
}
 
string longestCommonPrefixop(vector<string>& strs)
{
    int n = strs.size();
    int minlen = findMinLength(strs, n);
 
    string result; // Our resultant string
    char current;  // The current character
 
    for (int i=0; i<minlen; i++)
    {
        current = strs[0][i];
        for (int j=1 ; j<n; j++)
            if (strs[j][i] != current)
                return result;
        result.push_back(current);
    }
 
    return (result);
}
int main()
{
    vector<string> nums={"flower","flow","flying"};

    string ans=longestCommonPrefixop(nums);
    for(int i=0;i<ans.length();i++)
    {
        cout<<ans[i];
    }
}