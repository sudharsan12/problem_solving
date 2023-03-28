#include<bits/stdc++.h>
using namespace std;

int fun(string s1,string s2,int n,int m,int ind1,int ind2,int val1,int val2,int len)
{
    if(ind1==n ||ind2==m)
        return 0;
      val1=(val1<<ind1)|(int)(s1[ind1]-'0');
      val2=(val2<<ind2)|(int)(s2[ind2]-'0');

    int val=(2*len)/(1+2*(val1^val2));
    int val3,val4;

     val3=max(fun(s1,s2,n,m,ind1+1,ind2+1,0,0,len),fun(s1,s2,n,m,ind1+1,ind2+1,val1,val2,len+1));

    val4=max(fun(s1,s2,n,m,ind1+1,ind2,val1,val2,len),fun(s1,s2,n,m,ind1,ind2+1,val1,val2,len));



    int value=max(val,max(val3,val4));

cout<<value<<endl;
return value;
}


int printsubsequencemax(string str1,string str2,int n,int m)
{

    return fun(str1,str2,n,m,0,0,0,0,1);
}

int main()
{
    string str1,str2;

    cin>>str1>>str2;

    int n=str1.length();
    int m=str2.length();

    int ans=printsubsequencemax(str1,str2,n,m);

    cout<<ans<<endl;
}
