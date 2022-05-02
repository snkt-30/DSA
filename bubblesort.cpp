#include "bits/stdc++.h"
using namespace std;

int shouldPunish(int roll[], int marks[], int n, double avg)
{
    int cnt = 0;
    //    int nm= (int)sizeof(marks)/sizeof(marks[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (roll[j] > roll[j + 1])
            {
                cnt++;
                swap(roll[j], roll[j + 1]);
            }
        }
    }
    int sum = 0;
    double ans = 0.0;
    // int ms=sizeof(marks)/sizeof(marks[0]);
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    ans = (sum - cnt) / n;
    if (ans < avg)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int roll[] = {5, 4, 1, 3, 2, 6};
    int marks[] = {78, 98, 86, 67, 78, 79};
    int N = 6;

    cout << (shouldPunish(roll, marks, N, 67.5));
}

// 0.4