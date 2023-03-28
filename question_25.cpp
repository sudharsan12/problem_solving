#include <bits/stdc++.h>
using namespace std;
void path(int terminal,int node,vector<pair<int,int>>adj[],vector<vector<int>>&res,int init_cost)
{


  for(int i=0;i<adj[node].size();i++)
  {
      int next=adj[node][i].first;
      int cost=adj[node][i].second+init_cost;

    if(res[terminal][next]>cost)
    {
        res[terminal][next]=cost;
        path(terminal,next,adj,res,cost);
    }
  }
    return;
}

vector<vector<int>> eachPath(int N, int M, vector<vector<int>>& roads)
{
    vector<pair<int,int>>adj[N];

    for(int i=0;i<M;i++)
    {
        adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
    }

    vector<vector<int>>res(N,vector<int>(N,INT_MAX));

    for(int i=0;i<N;i++)
    {
        res[i][i]=0;
        path(i,i,adj,res,0);
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(res[i][j]==INT_MAX)
                res[i][j]=-1;
        }
    }

    return res;
}

int main()
{

    int n,m;
    cin>>n>>m;
    vector<vector<int>>roads(m,vector<int>(3,0));

    for(int i=0;i<m;i++)
    {
        cin>>roads[i][0]>>roads[i][1]>>roads[i][2];
    }


    vector<vector<int>>res =eachPath(n,m,roads);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}


