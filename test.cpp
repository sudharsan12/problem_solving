#include<bits/stdc++.h>
using namespace std;
template <class T>

class test
{
    public:
    T name;
    int num;
};

int main()
{


    test<string> t;
    t.name="sudharsan";
    t.num=10;

    pair<test<string>*,int>p;

    p=make_pair(&t,10);
/*
    cout<<p.first.name<<endl;
    cout<<p.first.num<<endl;
    cout<<p.second<<endl;
*/
}
