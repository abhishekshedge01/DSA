#include <bits/stdc++.h>
using namespace std;


// string replace(string str,string rep)
// {
//     if (str.length() == 0)
//     {
//         return "";
//     }
//     if (str[0] == 'p' && str[1]=='i')
//     {
//         return rep+replace(str.substr(2),rep);
//     }
//     else
//     {
//         return str[0]+ replace(str.substr(1),rep);
//     }
// }

void replace(string str)
{
    if(str.length()==0)
    {
        cout<<str;
        return;
    }
    
    if(str[0]=='p' && str[1]=='i')
    {
        cout<<"3.14";
        replace(str.substr(2));
    }
    else
    {
        cout<<str[0];
        replace(str.substr(1));
    }
}


int main()
{
    string str;
    cin>>str;
    replace(str);
}