#include<bits/stdc++.h>
using namespace std;

string putAtEnd(string str)
{
	if (str.length() == 0)
	{
		return "";
	}
	if (str[0] == str[1])
	{
		return putAtEnd(str.substr(1)) + str[0];
	}
	else
	{
		return str[0]+putAtEnd(str.substr(1));
	}
}

int main()
{
   string str;
   cin>>str;
   cout<<putAtEnd(str);
}