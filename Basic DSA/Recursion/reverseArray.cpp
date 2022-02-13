#include<bits/stdc++.h>
using namespace std;

void reverseVoid1(int* arr,int n)
{
	if (n == 0)
	{
		return;
	}
	reverseVoid1(arr + 1,n-1);
	cout << arr[0]<<" ";
}

void reverseVoid2(int *arr, int i, int n)
{
	if (i >= n) {
		return;
	}
	int value = arr[i];
	reverseVoid2(arr, i + 1, n);
	arr[n - i - 1] = value;
}

void reverseVoid3(int* arr, int i, int n)
{
	if (i >= n/2)
	{
		return;
	}
	swap(arr[i], arr[n - i - 1]);
	reverseVoid3(arr, ++i, n);
}

void print(int* arr,int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	int* arr=new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

    reverseVoid1(arr,n);
	cout << endl;   // O(n2) approach

	reverseVoid2(arr, 0, n);
	print(arr, n);   // O(n)

	reverseVoid3(arr, 0, n);
	print(arr, n);    // O(n)
}