// i/p : 1 1 2 2 3 3
//
//   o/p  2;



#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>& arr1)
{
	int del=0;
	int n=arr1.size();

	for(int i=0;i<n-1;i++)
	{
		int indexshifted=i-del;

		if(arr1[i]==arr1[i+1] && indexshifted%2==0)
			del++;
	}

	if((n-del)%2==1)
		del++;
	return del;
}



int main()
{
	int n;

	cin>>n;

	vector<int>arr_1(n);

	for(int i=0;i<n;i++)
		cin>>arr_1[i];


     cout<<"minimum deletion :"<<fun(arr_1)<<endl;

}
