
// i/p queries =[1,2,3,4,5,90], palindrome lenth=3
//
// o/p [101,111,121,131,141,999]
//
//


#include<bits/stdc++.h>
using namespace std;

vector<long long>fun(vector<int>arr,int intlength)
{

int power= (intlength%2)==0?(intlength/2-1):(intlength/2);

long start=pow(10,power);

vector<long long>res;
for(auto it:arr)
{
  long long num=start+(it-1);

  string ans=to_string(num);
  string rev=ans;
  reverse(rev.begin(),rev.end());

  if((intlength%2)==0)
	  ans=ans+rev;
  else
	  ans=ans+rev.substr(1,rev.length()-1);

if(ans.size()==intlength)
 res.push_back(stoll(ans));
else
	res.push_back(-1);
}
return res;
}


int main()
{
	int n,m;

	cin>>n;

	vector<int>arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>m;

	vector<long long>res=fun(arr,m);

	for(int i=0;i<n;i++)
	{
		cout<<res[i]<<"  ";
	}
	cout<<endl;
}
