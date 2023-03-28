#include<bits/stdc++.h>
using namespace std;

    string multiply(string num1, string num2) {

        int n1=num1.length();
        int n2=num2.length();

        if(n1<n2)
        return multiply(num2,num1);

       if(num1[0]=='0'||num2[0]=='0')
       return "0";

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string res;
        int carry=0;
        for(int i=0;i<n2;i++)
        {
            carry=0;
            for(int j=0;j<n1;j++)
            {

                int val=(num2[i]-'0')*(num1[j]-'0');


                if(res[i+j]==0){
                   res.push_back('0'+((val+carry)%10));
                carry=(val+carry)!=0?(val+carry)/10:0;

                }
                else{
                        int idx_val=res[i+j]-'0';
                    res[i+j]=('0'+((idx_val+val+carry)%10));
                    carry=(idx_val+val+carry!=0)?(idx_val+val+carry)/10:0;
                }

            }
            if(carry!=0)
            res.push_back(('0'+carry));
        }


      reverse(res.begin(),res.end());

        return res;
    }



int main()
{

    string s1,s2;

    cin>>s1>>s2;

    string res =multiply(s1, s2);
    cout<<res<<endl;
}
