#include"bits/stdc++.h"
using namespace std;

/*
Given a sorted and rotated array, find if there is a pair with a given sum
*/

bool givenpair(vector<int>& ar,int x)
{
    int mx=0;

    int n=ar.size();
    int ind=0;
    for(int i=0;i<n;i++){

        if(mx<ar[i])
        {
            ind=i;
        }
        mx=max(ar[i],mx);
    }
    int lo=ind+1,hi= ind;

    while(lo<n)
    {
        if(ar[lo]+ar[hi]==x)
        {
            cout<<ar[lo]<<" + "<<ar[hi]<<" = "<<x<<endl;
            return true;

        }
        else if(ar[lo]+ar[hi]>x)
        {
            hi--; 
        }
        else
        {
            lo++;
        }
    }

    return false;
}

int main()
{
    vector<int> nums={11,15,26,38,9,10};

    if(givenpair(nums,45))
{
    cout<<"yes present";
}
else
{
    cout<<"not present";
}

}