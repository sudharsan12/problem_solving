#include<bits/stdc++.h>
using namespace std;

int logestValidParenthsis(string str)
{

    int len=str.length();
    int prev_index=0;
    int prev_val=0;
    int cnt=0;
    int res=0;

    stack<int>stk;


    for(int i=0;i<n;i++)
    {

        if(str[i]=='(')
        {
          stk.push(i);
        }else if(!stk.empty())
        {
            stk.pop();
            cnt+=2;
        }else
        {
            cnt=0;
            prev_index=0;
            prev_val=0;
        }


        if(!stk.empty())
        {


        }


    }


}

int main()
{
    string str;
    cin>>str;

    cout<<logestValidParenthsis(str)<<endl;
}
