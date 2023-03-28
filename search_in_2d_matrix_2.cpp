#include<bits/stdc++.h>
using namespace std;

bool find_in_2d(vector<vector<int>>arr,int m,int n,int num)
{
	int s=0;
	int e=m*n-1;

	while(s<=e)
	{
		int mid=(s+e)/2;
		int i=mid/n;
		int j=mid%m;
		if(arr[i][j]==num)
			return 1;
		else if(arr[i][j]<num)
			s=mid+1;
		else
			e=mid-1;
	}
return 0;
}

int main()
{
	vector<vector<int>>arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	//vector<vector<int>>arr={{1,3,5,7},{10,11,16,20},{23,38,34,50}};

	int find=8;

	bool res=find_in_2d(arr,arr[0].size(),arr.size(),find);

	if(res==1)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
