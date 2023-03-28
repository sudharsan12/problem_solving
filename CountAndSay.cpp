#include<bits/stdc++.h>
using namespace std;

 string countAndSay(int n) {

        if(n==1)
        return "1";

        string num=countAndSay(n-1);
        int len=num.length();

        string res="";

        char val=num[0];
        int cnt=1;

        for(int i=1;i<len;i++)
        {
            if(val!=num[i])
            {

                res.push_back((char)('0'+cnt));
                res.push_back(val);
                val=num[i];
                cnt=0;
            }
            cnt++;
        }
        res.push_back((char)('0'+cnt));
        res.push_back(val);


        return res;
    }


int main()
{
    int n;
    cin>>n;
    map<char,int>mp;


  cout<<countAndSay(n)<<endl;;

}
