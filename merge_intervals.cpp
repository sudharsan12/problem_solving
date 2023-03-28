#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>merge_intervals(vector<vector<int>>&arr)
{

vector<vector<int>>res;

if(arr.size()==0)
	return res;

sort(arr.begin(),arr.end());

vector<int>temp=arr[0];

for(auto it:arr)
{

	if(it[0]<=temp[1])
		temp[1]=max(it[1],temp[1]);
	else
	{
		res.push_back(temp);
		temp=it;
	}
}
res.push_back(temp);

return res;

}

int main()
{

	vector<vector<int>>arr={{2,3},{4,5},{6,7},{8,9},{1,10}};

	

	vector<vector<int>>res=merge_intervals(arr);


	for(int i=0;i<res.size();i++)
		cout<<arr[i][0]<<"  "<<arr[i][1]<<endl;

}
