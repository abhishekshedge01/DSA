#include <bits/stdc++.h>
using namespace std;

void permutation(vector <int>& vec,int index, int n, vector <vector<int>>& newvec)
{
	if (index == n)
	{
		newvec.push_back(vec);
		return;
	}
	for (int i = index; i < n; ++i)
	{
		swap(vec[index], vec[i]);
		permutation(vec, index + 1, n, newvec);
		swap(vec[index], vec[i]);
	}
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
	vector <vector <int>> newvec;
	permutation(vec,0, n, newvec);
	for (int i = 0; i<newvec.size(); ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << newvec[i][j] << " ";
		}
		cout << endl;
	}
}