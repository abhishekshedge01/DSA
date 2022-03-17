#include <bits/stdc++.h>
using namespace std;

vector <vector <int>> ans;
void generate(vector <int>& vec, int i, vector <int>& newvec,int s,int sum)
{
	if (i == vec.size())
	{
       	ans.push_back(newvec);
		return;
	}
	generate(vec, i + 1, newvec);
	newvec.push_back(vec[i]);
	generate(vec, i + 1, newvec);
	newvec.pop_back();
}

int main()
{
	int n;
	cin >> n;
	vector <int> vec(n),newvec;
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}
	generate(vec, 0, newvec);
	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < ans[i].size(); ++j)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}