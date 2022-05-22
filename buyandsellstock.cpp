#include "bits/stdc++.h"
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minsofar = INT_MAX;
    int maxprofit = INT_MIN;

    for (int i = 0; i < prices.size(); i++)
    {

        minsofar = min(minsofar, prices[i]);
        maxprofit = max(maxprofit, prices[i] - minsofar);
    }
    return maxprofit;
}
int main()
{
    vector<int> prices={7,6,4,3,1};

    cout<<maxProfit(prices)<<endl;
}