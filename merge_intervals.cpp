#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>>res;

        int n=intervals.size();

        res.push_back(intervals[0]);

        for(int i=1;i<n;i++)
        {
            vector<int>temp=res.back();

            int val=min(temp[1],intervals[i][0]);

            if(temp[1]<frst)
            {
                res.push_back({frst,scnd});
            }else
            {
                res.pop_back();
                res.push_back({frst,scnd});
            }


        }
        return res;
    }


    int main()
    {

        vector<vector<int>>arr={{1,3},{2,6},{8,10},{15,18}};


        vector<vector<int>>res=merge(arr);

        for(int i=0;i<res.size();i++)
        {
          cout<<res[i][0]<<" "<<res[i][1]<<endl;
        }
    }
