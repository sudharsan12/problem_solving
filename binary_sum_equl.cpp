// here input is 4 you have to print 4 digit binary and show binay left and right side sums are equl show .
//
// ex :ip :4 
//
//   op: 1001
//       1010
//       1111
//
//



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=pow(2,n-1)+1;i<=pow(2,n)-1;i++)
	{
		int sum_1=0;
		int sum_2=0;

		for(int j=0,k=n-1;j<k;j++,k--)
		{
			sum_1+=(i>>j)&1;
			sum_2+=(i>>k)&1;
		}
		if(sum_1==sum_2)
			arr.push_back(i);
	}
	for(int i=0;i<arr.size();i++){
		for(int j=n-1;j>=0;j--)
		{
			int num=(arr[i]>>j)&1;
			cout<<num;
		}
		cout<<endl;
	}

}
