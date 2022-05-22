#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        unordered_map<int, int> mp;

        int *res = new int[2];
        for (int i = 0; i < n; i++)
        {

            mp[arr[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                res[0] = it.first;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (mp.find(i) == mp.end())
                res[1] = i;
        }
        return res;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << endl;
    }
}