#include<bits/stdc++.h>
using namespace std;

int sumArray(int* arr,int n)
{
	if (n==0)
	{
		return 0;
	}
	int sum = sumArray(arr + 1, n - 1);
	return sum + arr[0];
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cout<<sumArray(arr,n);
}