#include<bits/stdc++.h>
using namespace std;

string movetoLast(string str,char x)
{
    if(str.length()==0)
    {
        return "";
    }
    char first=str[0];
    string ans=movetoLast(str.substr(1),x);
    if(first==x)
    {
        return ans+first;
    }
    return first+ans;
}

int main()
{
   string str;
   cin>>str;
   char a;
   cin>>a;
   cout<<movetoLast(str,a);
}