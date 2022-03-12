#include<bits/stdc++.h>
using namespace std;
void generate(vector <int>& vec,int i,vector <int> &sub)
{
	if (i == vec.size())
	{
		for (int i = 0; i < sub.size(); ++i)
		{
			cout << sub[i] << " ";
		}
		cout << endl;
		return;
	}
	generate(vec, i + 1, sub);
	sub.push_back(vec[i]);
	generate(vec, i + 1, sub);
	sub.pop_back();
}

int main()
{
	int n;
	cin >> n;
	vector <int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}
	vector <int> sub;
	generate(vec,0,sub);
}