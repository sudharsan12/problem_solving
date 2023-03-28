#include<bits/stdc++.h>
using namespace std;

void u_reverse(vector<int>&arr,int i,int j)
{
	while(i<j)
	{
		swap(arr[i++],arr[j--]);
	}
}

void next_permutation(vector<int>&arr)
{
   if(arr.size()<=1)
	   return;

	int i=arr.size()-2;

	while(i>=0 && arr[i]>arr[i+1])
		i--;
	if(i>=0)
	{
		int j=arr.size()-1;
		while(arr[j]<=arr[i])
			j--;
		swap(arr[i],arr[j]);
	}

	//reverse(arr.begin()+i+1,arr.begin()+arr.size()-1);
	u_reverse(arr,i+1,arr.size()-1);

}


int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	next_permutation(arr);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
