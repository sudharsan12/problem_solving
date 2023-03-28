#include <bits/stdc++.h>
using namespace std;
bool checkMeta(string &str1, string &str2)
{

   int n=str1.length();
   int m=str2.length();

   if(n!=m)
   return 0;

   int num1=0;
   int num2=0;

   bool tr=0;

   for(int i=0;i<n;i++)
   {
       num1+=str1[i];
       num2+=str2[i];

       if(str1[i]!=str2[i])
       tr=1;
   }

   if(tr==0 || num1!=num2)
   return 0;

   return 1;

}


int main()
{

    string str1,str2;

    cin>>str1>>str2;

    if(checkMeta(str1,str2))
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;

}
