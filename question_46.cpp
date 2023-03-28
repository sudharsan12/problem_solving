#include<bits/stdc++.h>
using namespace std;

 int removeElement(vector<int>& nums, int val) {

 int n=nums.size(),cnt=0;

 for(int i=0;i<n;i++)
 {
     if(nums[i]==val)
     {
         cnt++;
         nums.erase(nums.begin()+i);
         i--;
     }

 }
return n-cnt;
}

int main()
{
    int n,k;

    cin>>n>>k;

    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];


    int num=removeElement(arr,k);

    for(int i=0;i<num;i++)
            cout<<arr[i]<<endl;
}
