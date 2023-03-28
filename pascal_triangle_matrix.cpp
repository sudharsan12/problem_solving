#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int first,second;

vector<vector<int>>pascal(n);

pascal[0].push_back(1);

for(int i=1;i<n;i++)
{
	first=0;
	second=1;

	for(int j=0;j<=i;j++)
	{
		pascal[i].push_back(first+second);
		first=second;

		if(pascal[i-1].size()-1==j)
			second=0;
		else
			second=pascal[i-1][j+1];

	}
}


for(int i=0;i<n;i++)
{

	for(int j=0;j<pascal[i].size();j++)
	cout<<pascal[i][j]<<" ";
	cout<<endl;
}

}
