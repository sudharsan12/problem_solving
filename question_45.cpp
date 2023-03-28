#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>nums,int val,int k)
{
    int res=0;

    for(int i=0;i<2;i++)
    {
        if(val+nums[i]<=k)
            res+=1+fun(nums,(val+nums[i])*10,k);
    }
    return res;
}

int findNum(int k)
{
    vector<int>nums={1,5};
    return fun(nums,0,k);

}
int main()
{
    int n;
    cin>>n;
    int res=findNum(n);
    cout<<res<<endl;
}
