#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int res=n*(n+1)/2;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			int distance=j;

			if(i-j<distance)
				distance=i-j;
			if((n-1)-i<distance)
				distance=(n-1)-i;
			int r=n-distance*3;
			int x=j-distance;
			int y=i-distance*2;
			int start=(((n+1)*n)/2)-(((r+1)*r)/2);

			if(x==y)
				cout<<setw(2)<<(start+y+1)<<" ";
			else if(y==(r-1))
				cout<<setw(2)<<(start+(r*2)-(x+1))<<" ";
			else
				cout<<setw(2)<<(start+(r*3)-(y+2))<<" ";
		}
		cout<<endl;
	}

}
