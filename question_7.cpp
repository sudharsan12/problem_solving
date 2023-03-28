
#include <bits/stdc++.h>
using namespace std;
int fun(vector<int>& arr,int ind,int sum_1,int sum_2)
{
   if(ind==0)
   {
       return abs(sum_1-sum_2);
   }

    int val_1=fun(arr,ind-1,sum_1-arr[ind],sum_2+arr[ind]);
    int val_2=fun(arr,ind-1,sum_1,sum_2);
 return min(val_1,val_2);
}


int minSubsetSumDifference(vector<int>& arr, int n)
{
    int sum=0;
  for(int i=0;i<n;i++)
      sum+=arr[i];


    vector<vector<bool>>dp(vector<bool>(sum+1,false));

    for(int i=0;i<n;i++){
    dp[i][0]=true;
    if(arr[i]<=sum)
        dp[0][arr[0]]=true;
        }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            bool d_pick=dp[i-1][j];
            bool pick=false;
            if(j>=arr[i])
                pick=dp[i][j-arr[i]];
            dp[i][j]=pick|d_pick;

        }
    }
    int maxi=1e8;

    for(int i=0;i<=sum/2;i++)
        if(dp[n-1][i]==true)
            maxi=min(maxi,abs(sum-i)-i);

    return maxi;
	//return fun(arr,n-1,sum,0);
}

int main()
{

    int n;
    cin>>n;
    vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }


cout<<minSubsetSumDifference(arr, int n)<<endl;
}

