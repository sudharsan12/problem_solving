#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n,temp,prv;
	cin>>n;
	vector<int>arr(n,0);
	arr[0]=1;
	for(int i=1;i<=n;i++)
	{
		temp=0;
		for(int j=0;j<i;j++)
		{
			prv=arr[j];
		arr[j]=temp+arr[j];
		cout<<arr[j]<<" ";
		temp=prv;
		}
		cout<<endl;
	}
}
