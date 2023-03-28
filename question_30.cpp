#include <bits/stdc++.h>
using namespace std;

void dfs(int node,int parent,vector<vector<int>>&graph,vector<int>&low,vector<int>&tin,int timer,vector<bool>&vis,set<int>&ans)
{
    vis[node]=true;

    low[node]=tin[node]=timer++;
    int child=0;

    for(int x:graph[node])
    {
        if(!vis[x])
        {
            dfs(x,node,graph,low,tin,timer,vis,ans);
            low[node]=min(low[node],low[x]);
            if(low[x]>=tin[node] && parent!= -1)
            {
                if(ans.find(node)==ans.end())
                {
                    ans.insert(node);
                }
            }
            child++;
        }
        else if(parent!=x)
        {
            low[node]=min(low[node],tin[x]);
        }
    }
    if(parent==-1 && child>1)
        ans.insert(node);

}



int beautifulVertices(int n, int m, vector<vector<int>> &edges)
{
    set<int>ans;
    vector<int>low(n);
    vector<int>tin(n);
    int timer=0;
    vector<bool>vis(n,false);
    vector<vector<int>>graph(n);

    for(int i=0;i<m;i++)
    {
        graph[edges[i][0]-1].push_back(edges[i][1]-1);
        graph[edges[i][1]-1].push_back(edges[i][0]-1);
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]!=true){
            dfs(i,-1,graph,low,tin,timer,vis,ans);
        }
    }
    for(int i=0;i<n;i++)
    {
    cout<<low[i]<<"  "<<tin[i]<<endl;
    }

    return ans.size();

}
int main()
{

    int n,m;

  cin>>n>>m;


    vector<vector<int>>edges(m,vector<int>(2));

    for(int i=0;i<m;i++)
        cin>>edges[i][0]>>edges[i][1];

    cout<<beautifulVertices(n,m,edges)<<endl;

}
