#include<bits/stdc++.h>
using namespace std;


void fun_1(string s,vector<string>str,int edge,int sze,vector<string>&res)
{

    if(edge==sze)
    {
        res.push_back(s);
        return;
    }

    for(int i=0;i<str[edge].length();i++)
    {

        fun_1(s+str[edge][i],str,edge+1,sze,res);
    }


}


vector<string>fun(vector<string>str)
{
    int n=str.size();

    vector<string>res;

    for(int i=0;i<str[0].length();i++)
    {
        string st;
        fun_1(st+=str[0][i],str,1,n,res);
    }

    return res;
}



  vector<string> letterCombinations(string digits) {

     int n=digits.length();
     vector<string>str(n);
     vector<string>res;
     if(n==0)
     return res;

    for(int i=0;i<n;i++)
    {

     int num=digits[i]-'0'-2;

     int st=(num<6)?num*3:num*3+1;

     int end= (num==5||num==7)?st+4:st+3;
     for(st;st<end;st++)
     str[i]+=('a'+st);

    }
     res=fun(str);

    return res;
    }




int main()
{


    vector<string>res=letterCombinations("23");

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }

}
