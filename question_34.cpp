#include<bits/stdc++.h>
using namespace std;


string addBinaryString(string &a, string &b, int n, int m)
{

    string str="";
    int i=n;
    int j=m;
    int val,carry=0;
    while(i>0 && j>0)
    {
        val=(carry+(a[i-1]-'0')+(b[j-1]-'0'));
        carry=(val>1)?1:0;
        str+=('0'+(val%2));
        i--;
        j--;
    }

    while(i>0)
    {
        val=carry+(a[i-1]-'0');
      carry=(val>1)?1:0;
        str+=('0'+(val%2));
        i--;
    }

    while(j>0)
    {
        val=carry+(b[j-1]-'0');
        carry=(val>1)?1:0;
        str+=('0'+(val%2));
        j--;
    }

    if(carry)
        str+='1';

    reverse(str.begin(),str.end());
    return str;
}



int main()
{
    string str1,str2;

    cin>>str1>>str2;

    cout<<addBinaryString(str1, str2, str1.length(), str2.length())<<endl;
}
