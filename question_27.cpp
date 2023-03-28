//insecting intervals

// interval1={ [2,8] [12,16]}
// interval2={ [5,9],[10,12],[14,15]}

//o/p ;- {[5 8] [12 12] [14 15]}


#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> intersectionPoint(vector<vector<int>>&interval1,vector<vector<int>>&interval2,int n1,int n2)
{

    vector<vector<int>>res;
    int i,j;
    while(i<n1 && j<n2)
    {

        int a= max(interval1[i][0],interval2[j][0]);
        int b=min(interval1[i][1],interval2[j][1]);

        if(a<=b)
        {
            res.push_back({a,b});
        }
        if(interval1[i][1]<interval2[j][1])
        {
         i++;
        }else{
        j++;
        }
    }

    return res;
}


int main()
{

    int n,m;

    cin>>n>>m;
    vector<vector<int>>interval1(n,vector<int>(2));
    vector<vector<int>>interval2(m,vector<int>(2));

    for(int i=0;i<n;i++)
    {
        cin>>interval1[i][0]>>interval1[i][1];
    }

    for(int i=0;i<m;i++)
    {
        cin>>interval2[i][0]>>interval2[i][1];
    }

    vector<vector<int>>res=intersectionPoint(interval1,interval2,n,m);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i][0]<<"  "<<res[i][1]<<endl;
    }

}
