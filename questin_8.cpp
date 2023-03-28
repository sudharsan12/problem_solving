
#include <bits/stdc++.h>
using namespace std;
int minSubarraySum(vector<int>&arr, int n, int k)
{
   int min_sum=0,sum=0;
    for(int i=0;i<k;i++)
    {
        min_sum+=arr[i];
    }
    sum=min_sum;
    int prev=0;
    for(int i=1;i<n;i++)
    {
        int index=i+k-1;
        if(index>=n)
        {
            index%=n;
        }
        sum=sum+arr[index]-arr[prev];
        min_sum=min(sum,min_sum);
        prev=i;
        cout<<sum<<endl;
    }

    return min_sum;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<minSubarraySum(arr,n,k)<<endl;
}
