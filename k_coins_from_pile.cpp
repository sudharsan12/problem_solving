#include<bits/stdc++.h>
using namespace std;

int find(vector<int>arr_1,int x,vector<int>arr_2,int y,int k,vector<vector<int>>&dp)
{
if(k==0 || x==arr_1.size() || y==arr_2.size())
	return 0;

if(dp[x][y]!=-1)
	return dp[x][y];

int pile_1=arr_1[x]+find(arr_1,x+1,arr_2,y,k-1,dp);
int pile_2=arr_2[y]+find(arr_1,x,arr_2,y+1,k-1,dp);


return dp[x][y]=max(pile_1,pile_2);
}


int fun(vector<int>arr_1,vector<int>arr_2,int k)
 {
	 vector<vector<int>>dp(arr_1.size(),vector<int>(arr_2.size(),-1));
   return find(arr_1,0,arr_2,0,k,dp);
 }


int main()
{

	int n,m,k;
	cin>>n;
	vector<int>arr_1(n);
	
	for(int i=0;i<n;i++)
		cin>>arr_1[i];
	cin>>m;

	vector<int>arr_2(m);
	for(int i=0;i<n;i++)
		cin>>arr_2[i];

	cin>>k;
	cout<<fun(arr_1,arr_2,k)<<endl;
}
