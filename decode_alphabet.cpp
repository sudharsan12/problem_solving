#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;

	for(int i=0;i<26;i++)
		str.push_back('a'+i);


	for(int i=0;i<26;i++)
	{
		char res='z'-(str[i]-'A');

		cout<<res<<endl;
	}
	

}
