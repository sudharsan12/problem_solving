#include<bits/stdc++.h>
using namespace std;

int division_fun(int divident,int divisor)
{

int res=0;
int num_1=divident;
int num_2=divisor;
if(num_1<0)
    num_1=-num_1;
if(num_2<0)
    num_2=-num_2;

    while(num_1>num_2)
    {
        num_1-=num_2;
        res++;
    }

        if(!(divident<0 && divisor<0)&&(divident<0 ||divisor<0))
            res=-res;

        return res;
}


int main()
{
    int divident,divisor;

    cin>>divident>>divisor;

    cout<<division_fun(divident,divisor)<<endl;
}
