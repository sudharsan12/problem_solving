// here you can buy single stock buy and sell
#include<bits/stdc++.h>
using namespace std;


int maximum_stocks(vector<int>&stocks,int n)
{

int res=0,min_stock=INT_MAX;

for(int i=0;i<n;i++)
{

	res=max(res,stocks[i]-min_stock);
	min_stock=min(min_stock,stocks[i]);
}

return res;
}


int main()
{
	int n;
	cin>>n;
	vector<int>stocks(n);
	for(int i=0;i<n;i++)
		cin>>stocks[i];

	int res=maximum_stocks(stocks,n);

	cout<<"the maximum profit is "<<res<<endl;
}
