// set the string is lexicographically strong with given limit
//
// ex  :   str = ccczazc   k=3
//
//       output: zzcccac
//
//
//       ex: bbbbaaaa k=2
//
//       output: bbabbaa    omit last a because of k =2 
//


#include<bits/stdc++.h>

using namespace std;



string fun(string str,int k)
{

	int count_letter[26]={0};

	for(auto it:str)
		count_letter[it-'a']++;

	int iter=25;

	string res="";
	while(iter>=0)
	{

		while(count_letter[iter]==0)
			iter--;

		if(iter>=0 && res.back()!=(char)(iter+'a'))
		{
		int freq=min(count_letter[iter],k);

		for(int i=0;i<freq;i++)
			res+=(char)(iter+'a');
		count_letter[iter]-=freq;

		if(count_letter[iter])
		{
			int iter_2=iter-1;
			while(count_letter[iter_2]==0)
				iter_2--;
			if(iter_2>=0)
			{
			res+=(char)(iter_2+'a');
			count_letter[iter_2]--;
			}
		}
		}else
		{
			iter--;
		}
	}

return res;
}




int main()
{
	string str;
	int k;

	cin>>str;
	cin>>k;

	string res=fun(str,k);

	cout<<fun(str,k)<<endl;
}
