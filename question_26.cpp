#include<bits/stdc++.h>
using namespace std;

void rotate_clockwise(vector<vector<int>>&arr,int n,int m)
{

    int prev=arr[0][0];

    int row_st=0;
    int row_ed=n-1;

    int col_st=0;
    int col_ed=m-1;

    while(row_st<row_ed&& col_st<col_ed)
    {

    for(int i=col_st;i<=col_ed;i++)
    {
        swap(prev,arr[row_st][i]);
    }

    for(int i=row_st+1;i<=row_ed;i++)
    {
        swap(prev,arr[i][col_ed]);
    }

    col_ed--;
    for(int i=col_ed;i>=col_st;i--)
    {

        swap(prev,arr[row_ed][i]);
    }
    row_ed--;

    for(int i=row_ed;i>=row_st;i--)
    {
        swap(prev,arr[i][col_st]);
    }
        row_st++;
        col_st++;

    prev=arr[row_st][col_st];
    }


}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>>arr(n,vector<int>(m));
    int num=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=++num;
        }
    }
    rotate_clockwise(arr,n,n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
