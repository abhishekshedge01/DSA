#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    char x=str[0];
    string ans=removeDuplicate(str.substr(1));
    if(ans[0]==x)
    {
        return ans;
    }
    else
    {
        return x+ans;
    }
}

int main()
{
   string str;
   cin>>str;
   cout<<removeDuplicate(str);
}