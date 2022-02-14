#include <bits/stdc++.h>
using namespace std;

void recursion(int n, int a, int b, int c)
{
	if (n == 3)
	{
	    cout<<c<<endl;
		return;
	}
	recursion(--n, b, c, a + b + c);
}

int main() {
	int t;
	cin>>t;
	while (t--)
	{
		int a, b, c, n;
		cin >> a >> b >> c >> n;
		recursion(n, a, b, c);
	}
	return 0;
}