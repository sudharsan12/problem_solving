#include<bits/stdc++.h>

using namespace std;

vector<string>PrintBinary(int n)
{
    vector<string>res;

    for(int i=1;i<=n;i++)
    {
        string val="";
        for(int j=0;(1<<j)<=i;j++)
        {
            val+=(char)(1&i>>j)+'0';

        }
        reverse(val.begin(),val.end());

        res.push_back(val);
    }

    return res;
}


int main()
{
int n;
cin>>n;

vector<string>res=PrintBinary(n);

   for(int i=0;i<res.size();i++)
   {
       cout<<res[i]<<endl;
   }

}
