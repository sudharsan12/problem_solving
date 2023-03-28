#include<bits/stdc++.h>

using namespace std;


void fun(vector<int>&arr,int n)
{
    map<int,int>mp;
    map<int,int>::iterator itr;
    vector<int>res;

    for(int i=0;i<n;i++)
    {
        auto it=mp.find(arr[i]);

        if(it==mp.end())
        {
            mp.insert({arr[i],1});
        }else
        {
            int val=it->second+1;

            mp[it->first]=val;
            if(val==n/3)
            {
                res.push_back(it->first);
            }
        }

    }



    for(itr=mp.begin();itr!=mp.end();itr++)
    {

        cout<<itr->first<<"  "<<itr->second<<endl;
    }





    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";

}


int main()
{
    int N;
    cin>>N;
    vector<int>arr(N);

    for(int i=0;i<N;i++)
        cin>>arr[i];

    fun(arr,N);

}
