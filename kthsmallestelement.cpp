#include "bits/stdc++.h"
using namespace std;

const int N = 1e5 + 10;
int fr[N];
int kthSmallest(int arr[], int l, int r, int k)
{
    for (int i = 0; i < N; i++)
    {
        fr[i] = -1;
    }
    for (int i = 0; i <=r; i++)
    {
        fr[arr[i]] = arr[i];
    }
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {

        if (fr[i] == -1)
        {
            continue;
        }
        else
        {
            cnt++;
        }

        if (cnt == k)
        {
            ans = fr[i];
            break;
        }
    }
    return ans;
}

int main()
{
    int ar[] = {7, 10, 4, 3, 20, 15};

    int n = sizeof(ar) / sizeof(ar[0]);
    cout << kthSmallest(ar, 0, n - 1, 3);
}