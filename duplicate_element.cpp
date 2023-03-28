#include<bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>arr,int n)
{
	set<int>u_map;
	vector<int>res;
	for(int i=0;i<n;i++)
		u_map.insert(arr[i]);
	for(auto x:u_map)
		res.push_back(x);
	
	return res;

}

/*
void solve(vector<int>&v,int n)
{
	vector<int>::iterator itr=v.begin();
	unordered_set<int>s;

	for(auto curr= v.begin();curr!=v.end();curr++)
	{

		if(s.insert(*curr).second)
			*itr++=*curr;
	}
	v.erase(itr,v.end());
}
*/

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n,0);

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	vector<int>res=solve(arr,n);

	for(int i=0;i<res.size();i++)
	{
		cout<<res[i];
	}
	cout<<endl;

}
