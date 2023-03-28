#include<bits/stdc++.h>
using namespace std;

 vector<vector<string>> groupAnagrams(vector<string>& strs) {


        vector<vector<string>>res;
        map<string,int>mp;
        int index=0;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];

            sort(s.begin(),s.end());

            map<string,int>::iterator itr=mp.find(s);

            if(itr==mp.end())
            {
                mp[s]=index++;
                res.push_back({strs[i]});
            }else
            {
                res[itr->second].push_back(strs[i]);
            }

        }
        return res;

    }


    int main()
    {

        vector<string>arr={"eat","tea","tan","ate","nat","bat"};

        vector<vector<string>>res=groupAnagrams(arr);

        for(int i=0;i<res.size();i++)
        {

            for(int j=0;j<res[i].size();j++)
                cout<<res[i][j]<<"  ";
            cout<<endl;
        }
    }
