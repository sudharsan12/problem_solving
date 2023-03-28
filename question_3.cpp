#include<bits/stdc++.h>
using namespace std;

void fun(string str)
{
    string res="";

    vector<int>arr(26,0);

    for(int i=0;i<str.length();i++)
    {
    if(str[i]>='a' &&str[i]<='z')
    arr[str[i]-'a']++;
    }

    vector<pair<int,char>>freq;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' &&str[i]<='z'){
        if(arr[str[i]-'a']==1)
        res+=str[i];
        else if(arr[str[i]-'a']!=-1)
        {
            freq.push_back({arr[str[i]-'a'],str[i]});
            arr[str[i]-'a']=-1;
        }
        }
    }


    for(int i=0;i<freq.size();i++)
    {
        int no=freq[i].first;
        char let=freq[i].second;
        for(int j=i+1;j<freq.size();j++)
        {
            if(no>freq[j].first)
            {
                swap(freq[i],freq[j]);
            }
        }

        res+=freq[i].second;
    }

    cout<<res<<endl;
}


int main()
{
    string str;

    getline(cin,str);

    fun(str);
}
