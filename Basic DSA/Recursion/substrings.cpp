#include<bits/stdc++.h>
using namespace std;

void substring(string str)
{
    if(str.length()==0)
    {
        return;
    }
    char a=str[0];
    string res=substring(str.substr(1));
    
}

int main()
{
   string str;
   cin>>str;
   substring(str);
}