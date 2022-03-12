#include<bits/stdc++.h>
using namespace std;
map <string, int> mp;
void generate(string s,int i,vector <string> &sub,string x)
{
	if (i == s.size())
	{
		mp[x]++;
		if (mp[x] == 1)
		{
			sub.push_back(x);
		}
		return;
	}
	generate(s, i + 1, sub,x);
	x+=(s[i]);
	generate(s, i + 1, sub,x);
	x.pop_back();
}

int main()
{
	string str;
	cin >> str;
	vector <string> sub;
	string x = "";
	generate(str,0,sub,x);
	for (int i = 0; i < sub.size(); ++i)
	{
		cout << sub[i]<< endl;
	}
}