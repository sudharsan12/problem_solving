#include<bits/stdc++.h>
using namespace std;

string Encode(string input)
{

    string res="";

    int n=input.length();

    for(int i=0;i<n;i++)
    {
        if((input[i]-'A')%2==1)
            res+=input[i];
        res+=(char)('Z'-input[i]+'A');
    }
return res;
}


string Decode(string input)
{

    string res="";

    int n=input.length();

    for(int i=0;i<n;i++)
    {
        if( i+1<n && (input[i+1]-'A')%2==0)
        {
            res+=input[i];
            i++;
            continue;
        }
        res+=(char)('Z'-input[i]+'A');
    }
return res;
}


int main()
{

    string input;

    cin>>input;

    string encode=Encode(input);

    cout<<encode<<endl;

    string decode=Decode(encode);
    cout<<decode<<endl;
}
