#include<bits/stdc++.h>
using namespace std;


vector<int> fun(vector<vector<int>>arr)
{
    int n=arr.size();
    int m=arr[0].size();

    int i=0,j=0;
    vector<int>res;
    while(i<n&&j<m)
    {


        //res.push_back(arr[i][j]);
        cout<<arr[i][j]<<"  ";
        j++;
        if(j==m)
        {
         j--;
         i++;
        }
        for(;i<n&&j>=0;i++,j--)
        cout<<arr[i][j]<<" ";
        //res.push_back(arr[i][j]);
        if(i==n){
            i--;
            j++;
        }
        j++;
        for(;i>0&&j<m;i--,j++)
           cout<<arr[i][j]<<" ";
           if(j==m)
            j--;

            //res.push_back(arr[i][j]);

    }
    return res;
}




int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<int>>arr(n,vector<int>(m,0));
    int cnt=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
           arr[i][j]=++cnt;

    vector<int>res=fun(arr);

    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
    cout<<"end..."<<endl;
}
