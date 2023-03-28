#include<bits/stdc++.h>
using namespace std;

bool placeChk(vector<vector<char>> &mat,int row,int col,int m)
{

    if(col==0 && mat[row][col]!= mat[row][col+1])
    return true;

    if(col==m-1 && mat[row][col]!= mat[row][col-1])
        return true;
    if(mat[row][col]!=mat[row][col-1] && mat[row][col]!=mat[row][col+1])
        return true;
    return false;
}

bool fun(vector<vector<char>> &mat,int row,int col,int r_size,char ch)
{
    char alpha[]={'B','R'};
    if(col==r_size)
        return true;

    if(mat[row][col]=='.')
      mat[row][col]=ch;

    if(!placeChk(mat,row,col,r_size))
    {
    return false;
    }

    for(int i=0;i<2;i++)
    {
        char old;
        if(col<r_size)
        old=mat[row][col+1];
      if(fun(mat,row,col+1,r_size,alpha[i]))
              return true;
              if(col<r_size)
               mat[row][col+1]=old;
    }
    return false;
}

bool diifferencevalue(int n,int m,vector<vector<char>> &mat)
{
    char val[]={'B','R'};
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<2;j++){
           if(fun(mat,i,0,m,val[j])){
                t=1;
               break;
           }
        }
        if(t==0)
    return false;
    }
    return true;
}


int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<char>>mat(n,vector<char>(m,'.'));
    char ch;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>ch;
            mat[i][j]=ch;
        }
    }

    bool val=diifferencevalue(n,m,mat);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    if(val)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
