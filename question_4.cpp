#include<bits/stdc++.h>
using namespace std;

void recur(vector<char>arr,int j,int n)
{
    if(j==n)
    {
        for(int i=0;i<n;i++)
            cout<<arr[i];
        cout<<endl;
        return;
    }
    vector<bool>dp(26,0);
    for(int i=j;i<n;i++)
    {
        if(dp[arr[i]-'a']==false)
        {
        swap(arr[i],arr[j]);
        recur(arr,j+1,n);
        swap(arr[i],arr[j]);
        dp[arr[i]-'a']=true;
        }
    }

}


void fun(string str)
{

    int n=str.length();
    vector<char>arr(n);
    for(int i=0;i<n;i++)
    {
       arr[i]=str[i];
    }

    recur(arr,0,n);
}

int main()
{
    string str;

    cin>>str;

    fun(str);
}
