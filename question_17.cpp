
#include<bits/stdc++.h>
using namespace std;

void fun(int open,int close,int n,string &str,vector<string>&res)
{
    if(open==n && close==open-1)
    {
        str+=')';
        res.push_back(str);
        return;
    }

    string nstr=str;

    if(open<n)
    {
         fun(open+1,close,n,nstr+='(',res);
    }
    if(close<open)
    {
        fun(open,close+1,n,str+=')',res);
    }

}


vector<string>PrintParenthisis(int n)
{
    vector<string>res;
    string str="";
    fun(0,0,n,str,res);
    return res;
}


int main()
{

int n;
cin>>n;

vector<string>res=PrintParenthisis(n);

   for(int i=0;i<res.size();i++)
   {
       cout<<res[i]<<endl;
   }
}
