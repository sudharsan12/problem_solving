#include<bits/stdc++.h>
using namespace std;


void print_patteren(int n)
{

    int cnt=0;
    for(int i=-(n-1);i<n;i++)
    {
        for(int j=-(n-1);j<n;j++)
        {

         int val;
         if(j<0)
            val=-j;
         else
            val=j;

         if(val==cnt)
            cout<<"* ";
         else
            cout<<"  ";
        }
        cout<<endl;

         if(i<0)
            cnt++;
         else
            cnt--;

    }

}



int main()
{

    int n;
    cin>>n;
    print_patteren(n);
}
