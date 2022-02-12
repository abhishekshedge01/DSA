#include <bits/stdc++.h>
using namespace std;

void reverse(string str)
{
    //base case
    if(str.length()==0)
    {
        return;
    }
    char first=str[0];
    reverse(str.substr(1));  //hypothesis
    cout<<str[0];           //induction
    
}


int main()
{
    string str;
    cin>>str;
    reverse(str);
}