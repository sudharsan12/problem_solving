// ip: [1,2,3]  [2,4,5]
// res[[1,3][4,5]]
//
// ex:[1,1,2,2,3] [3,3,5]
//
// res[[1,2][5]]






#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fun(vector<int>& arr1,vector<int>& arr2)
{
	vector<vector<int>>res(2);

	unordered_set<int>set_1(arr1.begin(),arr1.end());
	unordered_set<int>set_2(arr2.begin(),arr2.end());

	for(auto num:set_1)
	{
		if(set_2.count(num)==0)
			res[0].push_back(num);
	}
	for(auto num:set_2)
	{
		if(set_1.count(num)==0)
			res[1].push_back(num);
	}

	return res;
}



int main()
{
	int n,m;

	cin>>n;

	vector<int>arr_1(n);

	for(int i=0;i<n;i++)
		cin>>arr_1[i];
	cin>>m;

	vector<int>arr_2(m);

	for(int i=0;i<m;i++)
		cin>>arr_2[i];

	vector<vector<int>>res=fun(arr_1,arr_2);

	for(int i=0;i<res.size();i++)
	{
		for(int j=0;j<res[i].size();j++)
			cout<<res[i][j]<<" ";

		cout<<endl;
	}


}
