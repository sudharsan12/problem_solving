// factorial of number


#include<bits/stdc++.h>
using namespace std;

void mulitiply(vector<int>&digits,int num)
{

    int carry=0;

    for(int i=0;i<digits.size();i++)
    {
        int product=digits[i]*num+carry;
        digits[i]=product%10;
        carry=product/10;
    }

    while(carry!=0)
    {
        digits.push_back(carry%10);
        carry=carry/10;
    }

}


void factorial(int n)
{
    vector<int>digits;
    digits.push_back(1);
    for(int i=2;i<n+1;i++)
    {
        mulitiply(digits,i);
    }

    for(int i=digits.size()-1;i>=0;i--)
        cout<<digits[i];

}



int main()
{
    int n;
    cin>>n;

    factorial(n);
}
