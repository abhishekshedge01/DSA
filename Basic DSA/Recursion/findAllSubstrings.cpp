#include <bits/stdc++.h>
using namespace std;

int findAllSubstrings(string str,string* output)
{
    if(str.length()==0)
    {
        output[0]="";
        return 1;
    }
    int x=findAllSubstrings(str.substr(1),output);
    for(int i=0;i<x;++i)
    {
        output[i+x]=str[0]+output[i];
    }
    return 2*x;
}








int main()
{
    string str;
    cin>>str;
    string *output=new string[10000];
    int count=findAllSubstrings(str,output);
    for(int i=0;i<count;++i)
    {
        cout<<output[i]<<" ";
    }
}