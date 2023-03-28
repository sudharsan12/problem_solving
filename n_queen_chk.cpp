#include<bits/stdc++.h>
using namespace std;

    bool boardChk(vector<string>board,int x,int y,int n)
    {

        for(int i=1;i<=y;i++)
        {

            if(x-i>=0 && y-i>=0 && board[x-i][y-i]=='Q')
            return false;

            if(x+i<n && y-i>=0 && board[x+i][y-i]=='Q')
            return false;

            if(y-i>=0 && board[x][y-i]=='Q')
            return false;

        }
        return true;
    }


    bool fun(vector<string> arr,int n,int idx)
    {

        if(idx==n)
            return true;

        for(int i=0;i<n;i++)
        {
            if(boardChk(arr,i,idx,n) && fun(arr,n,idx+1))
                return true;

        }
        return false;

    }


    int main()
    {
        vector<string>arr={".Q..","...Q","Q...","..Q."};//,{"..Q.","Q...","...Q",".Q.."}};

        cout<<fun(arr,arr[0].length(),1)<<endl;
    }
