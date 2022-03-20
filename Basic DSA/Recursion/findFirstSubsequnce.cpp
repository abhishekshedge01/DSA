#include <bits/stdc++.h>
using namespace std;

bool prints(vector <int>& vec,int i, int sum, int s, vector <int>& newvec)
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
			return true;
		}
		return false;
	}
	if (prints(vec, i + 1, sum, s, newvec) == true)
	{
		return true;
	}
	s += vec[i];
	newvec.push_back(vec[i]);
	if (prints(vec, i + 1, sum, s, newvec) == true)
	{
		return true;
	}
	s -= vec[i];
	newvec.pop_back();
	return false;
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
	bool x=prints(vec,0, sum, 0, newvec);
	cout << x << endl;
}
