#include<bits/stdc++.h>
using namespace std;

int fun(int ind,vector<int>&coins,vector<int> &freq,int v)
{
    if(v==0)
        return 1;
    if(ind<0)
        return 0;

    int notTake=fun(ind-1,coins,freq,v);
    int res=0;
    for(int i=1;i<=freq[ind];i++)
    {
        int bal=v-(coins[ind]*i);
        if(bal>=0)
        res+=fun(ind-1,coins,freq,bal);
    }


    return (res+notTake)%10000000007;
}

int coinChange(int n, vector<int> &coins, vector<int> &freq, int v) {

    return fun(n-1,coins,freq,v);
}




int main()
{
    int n,val;
    cin>>n;
    vector<int>coins(n);
    vector<int>freq(n);

    for(int i=0;i<n;i++)
     cin>>coins[i];

    for(int i=0;i<n;i++)
     cin>>freq[i];

     cin>>val;

     cout<<coinChange(n,coins,freq,val)<<endl;
}
