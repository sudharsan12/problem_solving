#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i=-(n-1);i<n;i++)
    {
        int x=1;
        for(int j=-(n-1);j<n;j++)
        {

            cout<<x<<" ";

            int n;
            int m;

            if(i<0)
            m=-i;
            else
            m=i;

            if(j<0)
            n=-j;
            else
            n=j;

            if(n>m||j>=m)
                x=x^1;

        }
        cout<<endl;
    }

}
