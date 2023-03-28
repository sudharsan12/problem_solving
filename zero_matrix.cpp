#include<bits/stdc++.h>
using namespace std;

void arrange_zero(vector<vector<int>>&matrix,int i,int j,int n,int m,int count)
{

	int   up =i-count;
	int down = i+count;
	int left=j-count;
	int right=j+count;

	if(up>=0)//&&matrix[up][j]!=0)
	{
		matrix[up][j]=0;
		arrange_zero(matrix,i,j,n,m,1+count); 
	}
	if(down<n)// && matrix[down][j]!=0)
	{
		matrix[down][j]=0;
		arrange_zero(matrix,i,j,n,m,1+count); 
	}
	if(right<m )//&& matrix[i][right]!=0)
	{
		matrix[i][right]=0;
		arrange_zero(matrix,i,j,n,m,1+count); 
	}
	if(left>=0)//&& matrix[i][left]!=0)
	{
		matrix[i][left]=0;
		arrange_zero(matrix,i,j,n,m,1+count); 
	}

return;
}


void make_zero(vector<vector<int>>&matrix,int i,int j,int n,int m)
{

	arrange_zero(matrix,i,j,n,m,1);

}





void zero_matrix(vector<vector<int>> &matrix)
{

	int n=matrix.size();
	int m=matrix[0].size();

	queue<pair<int,int>>qe;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
				qe.push(make_pair(i,j));
		}
	}

	while(qe.empty()==0)
	{
	
		pair<int,int>pr=qe.front();
		make_zero(matrix,pr.first,pr.second,n,m);
		qe.pop();
	}

return;

}


int main()
{
int n,m;

cin>>n>>m;

vector<vector<int>>matrix(n,vector<int>(m,0));

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
		cin>>matrix[i][j];
	
}


zero_matrix(matrix);

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
		cout<<matrix[i][j]<<" ";
	cout<<endl;
}


}
