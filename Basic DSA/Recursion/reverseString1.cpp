#include <bits/stdc++.h>
using namespace std;

string reverse(string str)
{
    //base case
    if(str.length()==0)
    {
        return str;
    }
    char first=str[0];
    string reversed=reverse(str.substr(1));  //hypothesis
    return reversed+first;           //induction
}

int main()
{
    string str;
    cin>>str;
    cout<<reverse(str);
}