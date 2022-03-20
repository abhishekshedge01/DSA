#include <bits/stdc++.h>
using namespace std;

void prints(vector <int>& vec,int i, int sum, int s, vector <int>& newvec)
{
	if (i == vec.size())
	{
		if (s == sum)
		{
			for (int j = 0; j < newvec.size(); ++j)
			{
				cout << newvec[j] << " ";
			}
			cout << endl;
		}
		return;
	}
	if (s <sum)
	{
		s += vec[i];
		newvec.push_back(vec[i]);
		prints(vec, i, sum, s, newvec);
		s -= vec[i];
		newvec.pop_back();
	}
	prints(vec, i + 1, sum, s, newvec);
	return;
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
	int sum;
	cin >> sum;
	vector <int> newvec;
    prints(vec,0, sum, 0, newvec);
}
