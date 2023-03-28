#include<bits/stdc++.h>
using namespace std;

int findTriplets(vector<int>&arr,int x)
{
int count=0;
    for(int i=0;i<arr.size()-2;i++)
    {
        int reduce=x-arr[i];
        int start=i+1;
        int end=arr.size()-1;

        while(start<end)
        {
            if(arr[start]+arr[end]==reduce)
                count++;
            if(arr[start]+arr[end]>reduce)
                end--;
            else
                start++;
        }
    }

    return count;



}




int main()
{
    int n;
    cin>>n;
    int x;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;


    cout<<findTriplets(arr,x)<<endl;

}
