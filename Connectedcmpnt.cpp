#include"bits/stdc++.h"
using namespace std;

const int N=1e5+10;

vector<int> g[N];
bool vis[N];
vector<vector<int> > cc;
vector<int>current_cc;

void dfs(int vertex){
    vis[vertex]=true;

    current_cc.push_back(vertex);
   vector<int> :: iterator it;
   for(it=g[vertex].begin();it!=g[vertex].end();it++){

       if(vis[*it]);
       else{
           dfs(*it);

       }
   }
//    cc.push_back(current_cc);
}
int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ct=0;
    for(int i=1;i<=n;i++) {
        if(vis[i])continue;
        current_cc.clear();
        
        dfs(i);
        cc.push_back(current_cc);
    }

    cout<<cc.size()<<endl;

  for(int i=0;i<cc.size();i++)
  {
      for(int j=0;j<cc[i].size();j++)
      {
          cout<<cc[i][j]<<" ";
      }
      cout<<endl;
  }


}