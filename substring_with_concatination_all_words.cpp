#include<bits/stdc++.h>
using namespace std;

//approch 1
/*
int fun(vector<string>words,int nxt,string s,int pos,int len,int n)
{
  if(nxt==len)
    return 1;

   for(int i=nxt;i<len;i++)
   {
       if(s[pos]==words[i][0] && s.compare(pos,n,words[i])==0)
       {
       swap(words[i],words[nxt]);
       return fun(words,nxt+1,s,pos+n,len,n);
       swap(words[i],words[nxt]);
       }
   }

   return 0;

}



vector<int> findSubstring(string s, vector<string>& words) {
        int len=words.size();
        int n=words[0].length();
        int s_len=s.length();
        vector<int>res;


      for(int i=0;i<s_len;i++)
      {

          for(int j=0;j<len;j++)
          {
              if(s[i]==words[j][0]&&s.compare(i,n,words[j])==0)
              {

                  swap(words[0],words[j]);
                  if(fun(words,1,s,i+n,len,n))
                    res.push_back(i);
                  swap(words[0],words[j]);
                  break;
              }
          }

        }

return res;
    }
*/


int fun(map<string,int>mp,string s,int pos,int n,int s_len,int len)
{
    int cnt=0;
    map<string,int>::iterator it;

    for(int i=pos;i<s_len;i+=n)
    {
        string str=s.substr(i,n);
        it=mp.find(str);

        if(it==mp.end()||it->second==0)
        return 0;
        else{
            cnt++;
            it->second--;
        }
        if(cnt==len)
            return 1;
    }

    return 1;
}

vector<int> findSubstring(string s, vector<string>& words) {
        int len=words.size();
        int n=words[0].length();
        int s_len=s.length();
        vector<int>res;

        map<string,int>mp;

        for(int i=0;i<len;i++)
            mp[words[i]]++;
          int i=0;

        while(i<=(s_len-(n*len)))
        {
            if(fun(mp,s,i,n,s_len,len))
                res.push_back(i);
            i++;
        }
return res;
}




int main()
{  string str="wordgoodgoodgoodbestword";//"barfoofoobarthefoobarman";

    vector<string>words={"word","good","best","good"};//{"bar","foo","the"};



    vector<int>res=findSubstring(str,words);

    for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;

        cout<<"end...."<<endl;

}
