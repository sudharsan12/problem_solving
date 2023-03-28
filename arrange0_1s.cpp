#include<bits/stdc++.h>
using namespace std;


void arrange_01s(vector<int>&arr)
{
int i=0,j=arr.size()-1;

while(i<j)
{
	while(arr[i]==0)
		i++;
	while(arr[j]==1)
		j--;
	swap(arr[i],arr[j]);
	i++;
	j--;

}
}


int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<endl;
	arrange_01s(arr);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

}
