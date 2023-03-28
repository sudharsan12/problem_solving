#include <bits/stdc++.h>
using namespace std;



bool fun(string a,string b,string c,int a_l,int b_l,int c_l,
        int len_a,int len_b,int len_c)
{

cout<<a_l<<"  "<<b_l<<"  "<<c_l<<endl;
    if(c_l==len_c)
        return true;
    if(a_l>=len_a && b_l>=len_b)
    return false;

    if(a[a_l]==c[c_l]&&b[b_l]==c[c_l])
        return fun(a,b,c,a_l,b_l+1,c_l+1,len_a,len_b,len_c)||fun(a,b,c,a_l+1,b_l,c_l+1,len_a,len_b,len_c);
    else if(a[a_l]==c[c_l])
        return fun(a,b,c,a_l+1,b_l,c_l+1,len_a,len_b,len_c);
    else  if(b[b_l]==c[c_l])
        return fun(a,b,c,a_l,b_l+1,c_l+1,len_a,len_b,len_c);
    else
        return fun(a,b,c,a_l+1,b_l+1,c_l,len_a,len_b,len_c);


}

bool isInterleave(string a, string b, string c){

    int len_a=a.length();
    int len_b=b.length();
    int len_c=c.length();

    if((len_a+len_b)!=len_c)
        return false;


    return fun(a,b,c,0,0,0,len_a,len_b,len_c);

}

















/*
bool isInterleave(string a, string b, string c){

    int len_a=a.length();
    int len_b=b.length();
    int len_c=c.length();

    if((len_a+len_b)!=len_c)
        return false;
    int a_l=0;
    int b_l=0;
    int c_l=0;
    while(a_l<len_a || b_l<len_b)
    {
        if(a[a_l]==c[c_l])
        {
            a_l++;
            c_l++;
        }else if(b[b_l]==c[c_l])
        {
            b_l++;
            c_l++;
        }else
        {
            b_l++;
            a_l++;
        }

    }
    cout<<c_l<<endl;
        if(c_l==len_c)
            return true;

    return false;
}*/

int main()
{
    string a,b,c;

    cin>>a>>b>>c;
    bool num =isInterleave(a,b,c);
    if(num)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}
