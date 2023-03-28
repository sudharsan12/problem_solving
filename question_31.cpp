#include <bits/stdc++.h>
using namespace std;
vector<int> canCompleteChallenges(vector<int> &arr, vector<vector<int>> &mat)
{
    int n=arr.size();
    int chlng=mat.size();
     vector<int>res(chlng);
     vector<int>sumPizza;
    int num=0;
    for(int i=0;i<n;i++)
    {
        num+=arr[i];
        sumPizza.push_back(num);
    }

    for(int i=0;i<chlng;i++)
    {
        int type=mat[i][0];
        int days=mat[i][1];
        float cnsmbtn=mat[i][2];

        float val= (float)sumPizza[type]/(float)(days+1);

             cout<<val<<"  "<<cnsmbtn<<endl;

        if(val>=1 && val<=cnsmbtn)
            res[i]=1;
        else
            res[i]=0;
    }
    return res;
}

int main()
{
    int n,m;

    cin>>n>>m;

    vector<int>arr(n);
    vector<vector<int>>query(m,vector<int>(3));
    for(int i=0;i<n;i++)
            cin>>arr[i];
    for(int i=0;i<m;i++)
    {
        cin>>query[i][0]>>query[i][1]>>query[i][2];
    }


    vector<int>res=canCompleteChallenges(arr, query);

    for(int i=0;i<m;i++)
            cout<<res[i]<<endl;


}
