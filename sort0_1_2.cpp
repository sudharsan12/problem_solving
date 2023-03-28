#include<bits/stdc++.h>

using namespace std;

void sort(vector<int>& arr,int n)
{
int st=0;
int mid=0;
int ed=n-1;

while(mid<=ed)
{
  while(arr[mid]==0)
	  swap(arr[st++],arr[mid++]);
  while(arr[mid]==1)
	  mid++;
  while(
  if(arr[mid]==2&& mid<ed)
  swap(arr[mid],arr[ed--]);
}

return;
}



int main()
{
int n;

cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++)
	cin>>arr[i];

sort(arr,n);

for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
cout<<endl;

}
