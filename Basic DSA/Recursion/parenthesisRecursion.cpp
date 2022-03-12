#include<bits/stdc++.h>
using namespace std;

vector <string> vec;
void generate(string& str, int open, int close)
{
	if (open == 0 && close == 0)
	{
		vec.push_back(str);
		return;
	}
	if (open > 0)
	{
		str += '(';
		generate(str, open - 1, close);
		str.pop_back();
	}
	if (close > 0)
	{
		if (open < close)
		{
			str += ')';
			generate(str, open, close - 1);
			str.pop_back();
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int open = n, close = n;
	string str = "";
	generate(str, open, close);
	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i]<< endl;
	}
}