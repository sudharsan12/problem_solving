
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s)
{

int n=s.length();


  if(n==1)
  {
    return true;
  }

int st=0;

int ed=n-1;

   while(st<=ed)
   {
       while(!((s[st]>='0' &&s[st]<='9')||(s[st]>='a' && s[st]<='z')||
       (s[st]>='A' &&s[st]<='Z')))
       st++;

       while(!((s[ed]>='0' &&s[ed]<='9')||(s[ed]>='a' && s[ed]<='z')||
       (s[ed]>='A' &&s[ed]<='Z')))
       ed--;

       char a=s[st];
       char b=s[ed];

       if((a>='A' && a<='Z'))
       a+=32;

       if((b>='A' && b<='Z'))
       b+=32;

       if(a!=b)
       return 0;

     st++;
     ed--;
   }

return 1;

}


int main()
{
    int n;

    cin>>n;

    vector<string>strs(n);

    for(int i=0;i<n;i++)
    {
        cin>>strs[i];
    }

    for(int i=0;i<n;i++)
    {
        if(checkPalindrome(strs[i]))
            cout<<"yes"<<endl;
        else
           cout<<"No"<<endl;
    }

}
