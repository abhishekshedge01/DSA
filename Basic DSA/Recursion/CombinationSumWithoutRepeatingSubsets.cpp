#include <bits/stdc++.h>
using namespace std;

void generate(vector <int>& vec, int i, int n, vector <int>& newvec, int target)
{
	if (target == 0)
	{
		for (int i = 0; i < newvec.size(); ++i)
		{
			cout << newvec[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int j = i; j < vec.size() - 1; ++j)
	{
		if (j>i && vec[j] == vec[j + 1])
		{
			continue;
		}
		if (vec[j] > target)
		{
			break;
		}
		newvec.push_back(vec[j]);
		generate(vec, j + 1, n, newvec, target - vec[j]);
		newvec.pop_back();
	}
}

int main()
{
	int n;
	cin >> n;
	vector <int> vec(n);
	for(int i=0;i<n;++i)
	{
		cin >> vec[i];
	}
	int target;
	cin >> target;
	vector <int> newvec;
	sort(vec.begin(), vec.end());
	generate(vec,0, n, newvec, target);
}
