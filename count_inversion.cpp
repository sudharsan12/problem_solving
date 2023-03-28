//count inversion
//
// arr[i]>arr[j] .. i<j
//
// ex: arr=[2,5,1,3,4];
//
//  o/p  : 4  
//
//  explnation :   (2,1),(5,1),(5,3),(5,4)



#include<bits/stdc++.h>
using namespace std;


int merge(vector<long long>&arr,int s,int m,int e,long long *temp)
{
int res=0;

int i=s;
int j=m+1;
int k=s;
while(i<=m && j<=e)
{
	if(arr[i]>arr[j])
	{
		res+=(m-i+1);
		temp[k++]=arr[j++];
	}
	else
	{
		temp[k++]=arr[i++];
	}
}

while(i<=m)
	temp[k++]=arr[i++];

while(j<=e)
	temp[k++]=arr[j++];


for(i=s;i<=e;i++)
   arr[i]=temp[i];

  
return res;
}


int merge_sort(vector<long long>&arr,int s,int e,long long *temp)
{

	int res=0;
	if(s<e)
	{
		int mid=(s+e)/2;
             res +=merge_sort(arr,s,mid,temp);
             res +=merge_sort(arr,mid+1,e,temp);
	      res+= merge(arr,s,mid,e,temp);
	}
	return res;
}



int count_inversion(vector<long long>&arr,int n)
{

	long long *temp=new long long [n];
return merge_sort(arr,0,n-1,temp);

}

int main()
{

vector<long long>arr={52244275,123047899,493394237,378906890,188674257,222477309,902683641,860884025,339100162};
//vector<long long>arr={9,8,4,7,3,2,1};
//vector<long long>arr={9,8,4,10,3,2,1};

int res=count_inversion(arr,arr.size());


cout<<res<<endl;
for(int i=0;i<arr.size();i++)
	cout<<arr[i]<<"  ";

cout<<endl;


}
