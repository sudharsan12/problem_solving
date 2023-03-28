#include<bits/stdc++.h>
using namespace std;


string convertString(string str)
{
	int n=str.length();

	for(int i=0;i<n;i++)
	{
		if((i==0&& str[i]>='a'&& str[i]<='z')||
		(i>0 && str[i-1]==' ' && str[i]>='a' && str[i]<='z'))
		str[i]^=32;
	}

return str;
}




int main()
{
    int n;

    string str;

    getline(cin,str);

    cout<<convertString(str)<<endl;

}
