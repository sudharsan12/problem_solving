#include<bits/stdc++.h>
using namespace std;

int divide(int divident,int divisor)
{
    if(divident==1<<31 && divisor==-1)
        return 1<<31;

    bool sign=(divident>=0)==(divisor>=0)?true:false;

    divident=abs(divident);
    divisor=abs(divisor);
    int res=0;
    while(divident-divisor>=0)
    {
        int cnt=0;

        while(divident-(divisor<<1<<cnt)>=0)
            cnt++;
    res+=1<<cnt;
    divident-=divisor<<cnt;
    }

    return sign?res:-res;
}






int main()
{
    int divident,divisor;
    cin>>divident>>divisor;

    cout<<divide(divident,divisor)<<endl;

}
