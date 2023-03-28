#include<bits/stdc++.h>
using namespace std;


void fun(string str,int l,int n)
{

    if(l==n-1){
            cout<<str<<endl;
        return;
    }
    for(int i=l;i<n;i++)
    {
        swap(str[l],str[i]);
        fun(str,l+1,n);
        swap(str[l],str[i]);
    }

}

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    fun(str,0,n);
}
