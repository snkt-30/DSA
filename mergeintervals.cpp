#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &ar)
{
    vector<vector<int>> ans;

    if(ar.size()==0)
    {
        return ans;
    }

    sort(ar.begin(),ar.end());

    vector<int> temp=ar[0];

    for(auto x: ar)
    {
        if(x[0]<=temp[1])
        {
            temp[1]=max(x[1],temp[1]);
        }
        else
        {
            ans.push_back(temp);
            temp=x;

        }
    }
    ans.push_back(temp);
    return ans;
}


int main()
{
    vector<vector<int>> nums={{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>> ans=merge(nums);

cout<<"[ ";
    for(auto x : ans)
    {
        cout<<"[ "<<x[0]<<","<<x[1]<<" ], "; 
    }
    cout<<" ]";



}