#include "bits/stdc++.h"
using namespace std;

string removeDuplicates(string s)
{
   string ans="";
   for(char c:s)
   {
       if(!ans.empty() and ans.back()==c)
       {
        ans.pop_back();
       }
       else
       {
           ans.push_back(c);
       }
   }

   return ans;
}


//accepted solution
string removeDuplicates(string s) {
        string res = "";
        for (char c : s) {
            if (!res.empty() && res.back() == c) {
                res.pop_back();
            } else {
                res.push_back(c);
            }
        }
        return res;
    }
int main()
{
    string s = "aaaaaaaa";

    string ans = removeDuplicates(s);

    for (int i = ans.length() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}