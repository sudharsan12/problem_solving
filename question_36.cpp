#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

             sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>res;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1,h=n-1,sum=-nums[i];


             while(l<h)
             {
                 int abc=nums[l]+nums[h];
                 if(abc==sum)
                 {
                     vector<int>val;
                    val.push_back(nums[i]);
                     val.push_back(nums[l]);
                     val.push_back(nums[h]);
                     res.push_back(val);

                     while(l<h && nums[l]==nums[l+1])
                     l++;
                     while(l<h && nums[h]==nums[h-1])
                     h--;

                     l++;
                     h--;
                 }else if(sum>abc)
                       l++;
                else
                    h--;
             }

        }
return res;
    }



int main()
{

int n;

cin>>n;

vector<int>arr(n);

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

vector<vector<int>>res= threeSum(arr);

for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++)
        {
       cout<<res[i][j]<<" ";
        }
             cout<<endl;
}

}
