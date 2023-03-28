#include<bits/stdc++.h>
using namespace std;

	int print2largest(vector<int>&arr, int n) {

	 	int first=INT_MIN;
	int second=INT_MIN;

	for(int i=0;i<n;i++)
	{
	    if(first<arr[i])
	    {
	        second=first;
	        first=arr[i];
	    }else if(first!=arr[i])
	        second=max(second,arr[i]);
	}

	if(second==INT_MIN)
	return -1;
	else
	return second;

	}


	int main()
	{
	    int n;

        cin>>n;
	    vector<int>arr(n);

      for(int i=0;i<n;i++)
        cin>>arr[i];


	    cout<<print2largest(arr,n)<<endl;
	}
