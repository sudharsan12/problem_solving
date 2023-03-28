#include<bits/stdc++.h>
using namespace std;


int longestDangerousRange(vector<int>& arr, int n)
{
   if(n==1)
       return 1;

    int val,maxhill=1,count=1;
    int ele,chk;
    val=arr[0]>arr[1]?0:1;
    ele=arr[1];
    for(int i=2;i<n;i++)
    {
        chk=ele>arr[i]?0:1;
        if(val!=chk)
        {
            count++;
        }else
            count=;
        ele=arr[i];
        val=chk;

        maxhill=max(maxhill,count);
    }
    return maxhill+1;
}

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];


   cout<<longestDangerousRange(arr,n)<<endl;
}
