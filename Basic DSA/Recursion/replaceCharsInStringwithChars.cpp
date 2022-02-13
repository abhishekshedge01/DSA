#include<bits/stdc++.h>
using namespace std;

string replace(string str, char x,string rep)
{
    if (str.length() == 0)
    {
        return "";
    }
    if (str[0] == x)
    {
        return rep+replace(str.substr(1), x,rep);
    }
    else
    {
        return str[0]+ replace(str.substr(1), x,rep);
    }
}

int main()
{	
	string str,rep;
    char c;
	cin >> str;
	cin >> c;
	cin >> rep;
	cout<<replace(str, c,rep);
}