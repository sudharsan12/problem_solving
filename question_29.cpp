
#include <bits/stdc++.h>
using namespace std;
vector<string> numdef(int n,int length)
{
    vector<string>res;

    if(length==0){
        res.push_back("");
        return res;
    }
    if(length==1){
        res.push_back("0");
        res.push_back("1");
        res.push_back("8");
        return res;
    }
    vector<string>middles=numdef(n,length-2);

    for(string middle:middles)
    {
        if(n!=length)
            res.push_back("0"+middle+"0");
        res.push_back("1"+middle+"1");
        res.push_back("6"+middle+"9");
        res.push_back("8"+middle+"8");
        res.push_back("9"+middle+"6");
    }

    return res;
}




vector<string>Strobogrammatic(int n)
{
    return numdef(n,n);
}


vector<string> findStrobogrammatic(int n) {

    return Strobogrammatic(n);

}


int main()
{
    int n;
    cin>>n;

    for(string str: findStrobogrammatic(n))
        cout<<str<<endl;
}
