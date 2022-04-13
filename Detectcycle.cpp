#include"bits/stdc++.h"
using namespace std;

const int N=1e5+10;
vector<int>g[N];
bool vis[N];
vector<int> parent[N];
bool iscycle(int vertex,int par)
{
    vis[vertex]=true;
    bool isloopesit=false;
    vector<int> :: iterator it;
    for(it=g[vertex].begin();it!=g[vertex].end();it++)
    {
      if(vis[*it] and *it==par)
      {
          continue;
      }
      if(vis[*it])
      {
          return true;
      }
     isloopesit != iscycle(*it,vertex);
    }
return isloopesit;
}

int main(){
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

bool isloopexit=false;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        if(iscycle(i,0))
        {
            isloopexit=true;
            break;

        }


    }
    cout<<isloopexit<<endl;

}