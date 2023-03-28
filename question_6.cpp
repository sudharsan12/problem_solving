#include <bits/stdc++.h>
using namespace std;
bool is_possible(vector<vector<int>>&mat,int i,int j,int n,int m,vector<vector<bool>>&visited)
{

if(i>=0 && i<n && j>=0 && j<m && mat[i][j]!=0 && visited[i][j]==false)
{
  return true;
}
    return false;
}

bool borderchk(vector<vector<int>>&mat,int i,int j,int n,int m,vector<vector<bool>>&visited)
{

if(i>=0 && i<n && j>=0 && j<m && mat[i][j]!=0 && visited[i][j]!=false)
{
  return true;
}
    return false;
}



int fun(int n,int m,vector<vector<int>>&mat,int sx,int sy,int dx,int dy,vector<vector<bool>>&visited,vector<vector<int>>&val)
{

    vector<vector<int>>move{{0,1},{1,0},{-1,0},{0,-1}};

      if(sx==dx && sy==dy)
        {
            int mi=-1;
            for(int j=0;j<4;j++)
            {
                int x1=sx+move[j][0];
                int y1=sy+move[j][1];

                if(borderchk(mat,x1,y1,n,m,visited))
                    if(mi<val[x1][y1])
                        mi=val[x1][y1];
            }
            val[sx][sy]=1+mi;

        return 0;
        }
    visited[sx][sy]=true;



    int max_dis=-1;
    for(int i=0;i<4;i++)
    {
    int x=sx+move[i][0];
    int y=sy+move[i][1];

        if(is_possible(mat,x,y,n,m,visited))
        {
            int mi=-1;
            for(int j=0;j<4;j++)
            {
                int x1=x+move[j][0];
                int y1=y+move[j][1];

                if(borderchk(mat,x1,y1,n,m,visited))
                    if(mi<val[x1][y1])
                        mi=val[x1][y1];
            }
            val[x][y]=1+mi;
            int value=fun(n,m,mat,x,y,dx,dy,visited,val);

            if(value>max_dis)
            max_dis=value;
        }
    }



    return val[dx][dy];
     //visited[sx][sy]=false;
   // return max_dis==-1? -1:max_dis+1;

   // return max_dis;
}


int longestPath(int n, int m, vector<vector<int>> &mat, int sx, int sy, int dx, int dy) {
	if(mat[sx][sy]==0)
        return -1;
    vector<vector<bool>>visited(n,vector<bool>(m,-1));
    vector<vector<int>>val(n,vector<int>(m,-1));
    val[sx][sy]=0;
    return fun(n,m,mat,sx,sy,dx,dy,visited,val);
}



int main()
{
    int x,y,sx,sy,dx,dy;
    cin>>x>>y;
    vector<vector<int>>mat(x,vector<int>(y));
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {

            cin>>mat[i][j];
        }
    }

    cin>>sx>>sy>>dx>>dy;

    int num=longestPath(x,y,mat,sx,sy,dx,dy);
    cout<<num<<endl;
}
