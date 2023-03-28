/*
Given an input string, please print the list of all characters in the string.
String: “naman”.
Output: “n=2,a=2,m=1”
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str;

    cin>>str;
    vector<int>alpha(26,0);
    for(int i=0;i<str.length();i++)
    {
        alpha[str[i]-'a']++;
    }

}
