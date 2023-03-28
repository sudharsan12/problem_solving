
#include<bits/stdc++.h>
using namespace std;

bool border_check(int i,int j,int n,int m)
{

    if(i==0||i==n-1||j==0||j==m-1)
        return true;

    return false;
}

vector<vector<int>> color_border(int n, int m, int new_color, int row, int col,vector<vector<int>> matrix){

    vector<vector<int>>res(matrix);
    vector<vector<bool>>vis(n,vector<bool>(m,0));

    queue<pair<int,int>>qe;
    qe.push({row,col});
    vis[row][col]=true;
    int oldColor=matrix[row][col];

    res[row][col]=border_check(row,col,n,m)?new_color:oldColor;

    int delrow[]={0,1,0,-1};
    int delcol[]={1,0,-1,0};

    while(!qe.empty())
    {
        int r=qe.front().first;
        int c=qe.front().second;
        qe.pop();
        for(int i=0;i<4;i++)
        {
            int nRow=r+delrow[i];
            int nCol=c+delcol[i];

            if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && res[nRow][nCol]==oldColor && vis[nRow][nCol]==false)
            {
                vis[nRow][nCol]=true;
                 res[nRow][nCol]=border_check(nRow,nCol,n,m)?new_color:oldColor;

                 qe.push({nRow,nCol});
            }


        }
    }
    return res;
}

int main()
{



   int check[6][20]={230187747, 248887042 ,307385962 ,740050191 ,397971720 ,574217927, 872649175 ,671581245, 148659941, 752675911, 255523683, 858002441, 851787483 ,683105794 ,443073952, 942922165 ,175662443 ,88391362 ,882828706, 782183828,
881221189 ,401288870, 932674399, 200341557, 567065696, 718481569, 222922689 ,40369165 ,307995790 ,363318336, 854743075, 783510631, 451111153 ,209709858, 573165440 ,738977745 ,848464452, 897045328, 215491458, 873164853,
844296146 ,669058817, 835919882, 949719103, 729300607, 992589492, 754360463 ,138834053 ,101121734, 459223255, 458173253 ,635225647, 257889920 ,472327517, 26841658 ,320034882 ,98537892, 721568799 ,278733321, 435725675,
138838953, 964228702, 847978478, 366809994, 488139229, 350557444, 810811100 ,650679307, 643175966 ,63177325 ,136866205, 851467127, 360203662 ,341731746, 703971402 ,604890206 ,44451963 ,734247070 ,487324313 ,220710101,
769874577, 844304843, 571610309, 669679684, 581088200, 704289813, 896379859, 214143153, 233492085 ,157766826, 642182214, 471201075, 818844269 ,675780444, 465696986 ,82868739 ,465151449 ,277008748 ,585833197, 751882796,
793190783, 115922441 ,515234965, 125709196, 553989218, 646679352 ,502476609 ,230771684 ,197212460 ,203069863 ,746915376, 574325148 ,422462728, 891334677 ,955621350 ,144162378 ,780949136 ,308054969 ,747525076, 314055190};
    int n,m,r,c,color;

    cin>>n>>m>>color>>r>>c;

    vector<vector<int>>arr(n,vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         cin>>arr[i][j];
        }
    }


   vector<vector<int>>res=color_border(n,m,color,r,c,arr);


    cout<<endl;
    cout<<endl;
    cout<<endl;
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(r==i && j==c){
            cout<<res[i][j]<<","<<check[i][j]<<"  ";
              cout<<i<<","<<j<<"  ";
            }
        }
        cout<<endl;
    }


}
