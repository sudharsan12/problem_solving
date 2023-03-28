#include<bits/stdc++.h>
using namespace std;

daysToEnjoy(int n,int m,vector<vector<int>> &restriction,vector<vector<int>> &teleport)
{

    vector<vector<int>>dp(n,vector<int>(m,INT_MIN));

    for(int i=0;i<n;i++)
    {
        if(teleport[0][i])
            dp[i][0]=restriction[i][0];
    }

    dp[0][0]=restriction[0][0];

    for(int j=1;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            for(int prev=0;prev<n;prev++)
            {
                if(i==prev||teleport[prev][i])
                {

                    dp[i][j]=max(dp[prev][j-1]+restriction[i][j],dp[i][j]);
                }

            }
        }
    }
    int maxDays=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }



    for(int i=0;i<n;i++)
        maxDays=max(maxDays,dp[i][m-1]);

    return maxDays;
}




int main()
{
    int n,m;
    int num;
    cin>>n>>m;
    vector<vector<int>>restriction;
    vector<vector<int>>teleport(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        restriction.push_back({});
        for(int j=0;j<m;j++)
        {
            cin>>num;
            restriction[i].push_back(num);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>num;
            teleport[i][j]=num;
        }
    }


    int res=daysToEnjoy(n,m,restriction,teleport);

    cout<<res<<endl;
}
