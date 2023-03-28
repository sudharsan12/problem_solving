// in this problem used to find given num is positive we have to find how many even digit numbers are present in the given range
//
// ex 20 
//    output :-  10
//
//    ex:-30
//       output :- 14
//
//
//
//       using formula if given num digit sum is even use num/2
//
//       or if given num digit sum is odd use ((num+1)/2 -1)





#include<bits/stdc++.h>
using namespace std;

int find(int num)
{
	if(num==0)
		return 0;

	return num%10+find(num/10);
}


int find_even_or_odd(int num)
{

	if(find(num)%2==0)
		return 0;
	return 1;
}



int find_even_digits(int num)
{

if( find_even_or_odd(num))
{
	return ((num+1)/2-1);

}
else{

return num/2;

}


}

int main()
{
	int n;
	cin>>n;

	cout<<find_even_digits(n)<<endl;
}
