#include "bits/stdc++.h"
using namespace std;

/*
Consider the indices of the diagonals of a NxM matrix. Let's use a 4x4 matrix as an example:

(0, 0) (0, 1) (0, 2) (0, 3)
(1, 0) (1, 1) (1, 2) (1, 3)
(2, 0) (2, 1) (2, 2) (2, 3)
(3, 0) (3, 1) (3, 2) (3, 3)
The first diagonal is (0, 0). The second is (0, 1), (1, 0), the third is (2, 0), (1, 1), (0, 2), etc.

It should be clear that the sum of row i and column j is equal to the index of the diagonal (diagonal number - 1). e.g. for the second diagonal (index 1), all possible pairings of (i, j) sum to 1, i.e. i + j = 1 for the 2nd diagonal. The maximum diagonal index is simply ((N-1) + (M-1)) = N + M - 2

So to solve the problem we simply need iterate through all possible diagonal indices (denote this as s) and find all possible pairs (i, j) such that i + j = s. The only thing we need to concern ourselves about is the order. We can find the ordering by looking at whether the diagonal index is even or odd. When the diagonal index is even we want to the first pair to be (s, 0) and when it is odd when want the first pair to be (0, s), and we decrease or increase i/j by 1 accordingly.
*/

// 453ms
vector<int> findDiagonalOrder(vector<vector<int>> &matrix)
{
    if (matrix.empty())
        return {};

    const int N = matrix.size();
    const int M = matrix[0].size();

    vector<int> res;
    for (int s = 0; s <= N + M - 2; ++s)
    {
        // for all i + j = s
        for (int x = 0; x <= s; ++x)
        {
            int i = x;
            int j = s - i;
            if (s % 2 == 0)
                swap(i, j);

            if (i >= N || j >= M)
                continue;

            res.push_back(matrix[i][j]);
        }
    }

    return res;
}

// easy to understand and optimized
// 15ms
vector<int> findDiagonalOrder(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int r = 0;
    int c = 0;
    vector<int> result;
    for (int i = 0; i < m * n; ++i)
    {
        result.push_back(mat[r][c]);
        if ((r + c) % 2 == 0)
        {
            // up, we can move right or down. first check whether already last col
            if (c == n - 1)
                r++;
            else if (r == 0)
                c++;
            else
            {
                r--;
                c++;
            }
        }
        else
        {
            // down, we can move right or down. check whether last row
            if (r == m - 1)
                c++;
            else if (c == 0)
                r++;
            else
            {
                r++;
                c--;
            }
        }
    }
    return result;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9},
                               {10, 11, 12}};

    vector<int> ans = findDiagonalOrder(mat);

    for (auto x : ans)
    {
        cout << x << " ";
    }
}