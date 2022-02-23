#include <bits/stdc++.h>
using namespace std;


int main()
{
	string str, ds;
	cin >> str;
	sort(str.begin(), str.end());
	vector <string> vec;
	
	do
	{
		vec.push_back(str);
	} while (next_permutation(str.begin(), str.end()));

	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
}