#include "bits/stdc++.h"
using namespace std;
int cnt;
void toi(char src, char dest, char aux, int n)
{
    if (n == 0)
    {
        return;
    }
    cnt++;
    toi(src, aux, dest, n - 1);

    cout << "move disk " << n << " from " << src << " to " << dest << endl;

    toi(aux, dest, src, n - 1);
}

int main()
{

    int n;
    cin >> n;
    toi('A', 'C', 'B', n);
    cout << "\nno. of calls in " << n << " disk is :" << cnt;

    /* tower of hanoi problem is just a another variant of inorder traversal in tree and graph as per my observation.
     

     no of call difference per increase in disk is 2,4,8,16,32,...
     */
}