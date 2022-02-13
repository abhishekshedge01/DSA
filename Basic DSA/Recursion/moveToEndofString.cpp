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

string putAtEnd(string str,char x)
{
	if (str.length() == 0)
	{
		return "";
	}
	if (str[0] == str[1])
	{
		return putAtEnd(str.substr(1),x) + str[0];
	}
	else
	{
		return str[0] + putAtEnd(str.substr(1),x);
	}
}

int main()
{
   string str;
   cin>>str;
   char a;
   cin>>a;
   cout<<movetoLast(str,a)<<endl;


   	string strx;
	cin >> strx;
	char x;
	cin >> x;
	cout << movetoLast(strx, x);
}