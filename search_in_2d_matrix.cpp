//in this problem row AND  column are arranged sorting order.
//
//if given element present in 2d matrix show true other wise false.
//
//
// [10,20,30,40]
// [15,25,35,45]
// [27,29,37,48]
// [32,33,39,50]
//  search element is 29
//
//  o/p true
//
//
//  note the point 
// -> in the element  arranged in the matrix sorting order
//    row wise order and column wise ordered

//
//  approach of the problem
//
//   -> taking first row last element compare with given numer
//     if the number greater than num<arr[i][j] let move the next row
//     or if arr[i][j]>num is less move one column front

#include<bits/stdc++.h>
using namespace std;

bool find_in_2d(vector<vector<int>>arr,int num)
{

int i=0;
int j=arr[0].size()-1;

while(i<arr.size() &&j>=0)
{
	if(arr[i][j]==num)
		return 1;
	else if(arr[i][j]>num)
		j--;
	else
		i++;
}

return 0;
}


int main()
{
	vector<vector<int>>arr={ {10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};

	bool res=find_in_2d(arr,48);

	if(res==1)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
