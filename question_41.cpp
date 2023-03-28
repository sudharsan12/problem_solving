#include<bits/stdc++.h>
using namespace std;
/*

   void fun(vector<int>& nums,int val,int target,int st,int ed,vector<vector<int>> &res)
   {

     int mid=(st+ed)/2;
    while(st!=mid && ed!=mid)
    {

    int num=val+nums[st]+nums[ed]+nums[mid];
    if(num==target)
    {

     vector<int>temp;
     temp.push_back(val);
    temp.push_back(nums[st]);
    temp.push_back(nums[mid]);
    temp.push_back(nums[ed]);
    res.push_back(temp);
      fun(nums,val,target,st+1,ed,res);
      fun(nums,val,target,st,ed-1,res);

    }
               if(target<val)
               mid-=1;
               else
               mid+=1;

    }


   }


    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());

        int n=nums.size();
        vector<vector<int>>res;
        if(n<4)
        return res;

        for(int i=0;i<n-3;i++)
        {
           int st=i+1,ed=n-1;
           int mid=(st+ed)/2;
           while(st!=mid && ed!=mid)
           {
               int num=nums[i]+nums[st]+nums[ed]+nums[mid];
               if(num==target)
               {
                   vector<int>r;

                   r.push_back(nums[i]);
                   r.push_back(nums[st]);
                   r.push_back(nums[mid]);
                   r.push_back(nums[ed]);
                   res.push_back(r);

                   fun(nums,nums[i],target,st+1,ed,res);
                   fun(nums,nums[i],target,st,ed-1,res);
               }
               if(target<num)
               mid-=1;
               else
               mid+=1;

           }

        }
        return res;

    }


*/

vector<vector<int>>fourSum(vector<int>nums,int target)
{

        sort(nums.begin(),nums.end());

        int n=nums.size();
        vector<vector<int>>res;
        if(n<4)
        return res;

        for(int i=0;i<n-3;i++)
        {
            int num=target-nums[i];

            for(int j=i+1;j<n-2;j++)
            {
               int st=j+1,ed=n-1;

               while(st<ed)
               {
                   int val=nums[j]+nums[st]+nums[ed];
                   if(val==num)
                   {
                       vector<int>temp;
                       temp.push_back(nums[i]);
                       temp.push_back(nums[j]);
                       temp.push_back(nums[st]);
                       temp.push_back(nums[ed]);
                       res.push_back(temp);
                   }

                   if(val>num)
                    ed--;
                   else
                    st++;
               }


            }

        }

    return res;
}


    int main()
    {

        vector<int>arr={1,0,-1,0,-2,2};

        vector<vector<int>>res=fourSum(arr, 0);

        for(int i=0;i<res.size();i++)
        {
            for(int j=0;j<4;j++)
                cout<<res[i][j]<<" ";
            cout<<endl;
        }
    }
