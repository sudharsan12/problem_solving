#include<bits/stdc++.h>
using namespace std;

void rotate_matrix(vector<vector<int>>&arr,int n,int m)
{
 
	int i=0;
  if(n<=1||m<=1)
	  return;

	int mx=max(n,m);

  while(i<mx/2)
   {
	  int temp=arr[i][i],temp_2;
	   for(int j=i;j<m-i-1;j++)
	   {
		   temp_2=arr[i][j+1];
		   arr[i][j+1]=temp;
		   temp=temp_2;
	   }
	   for(int j=i;j<n-i-1;j++)
	   {
		   temp_2=arr[j+1][m-1-i];
		   arr[j+1][m-1-i]=temp;
		   temp=temp_2;
	   }
	   for(int j=m-1-i;j>i;j--)
	   {
		   temp_2=arr[n-1-i][j-1];
		   arr[n-1-i][j-1]=temp;
		   temp=temp_2;
	   }
	   for(int j=n-1-i;j>i+1;j--)
	   {
		   temp_2=arr[j-1][i];
		   arr[j-1][i]=temp;
		   temp=temp_2;
	   }
   
	   arr[i][i]=temp;
    i++;
   }

}

int main()
{
	int n,m,num=0;
	cin>>n>>m;

	vector<vector<int>>arr(n,vector<int>(m,0));

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];

	rotate_matrix(arr,n,m);		

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<arr[i][j]<<"  ";
		cout<<endl;
	}


}

