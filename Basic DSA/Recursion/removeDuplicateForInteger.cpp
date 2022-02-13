#include <bits/stdc++.h>
using namespace std;

void removeDuplicateString(char* str)
{
	if (str[0] == '\0')
	{
		return;
	}
	if (str[1] == '\0')
	{
		return;
	}

	removeDuplicateString(str + 1);
	if (str[0] == str[1])
	{
		int i = 1;
		for (; str[i] != '\0'; ++i)
		{
			str[i - 1] = str[i];
		}
		str[i - 1] = str[i];
	}
}


void removeDuplicateArray(int* arr, int n)
{
	if (n == 0 || n == 1)
	{
		return;
	}
	removeDuplicateArray(arr + 1, n - 1);
	int x = n;
	if (arr[0] == arr[1])
	{
		int i = 1;
		for (; i < x; ++i)
		{
			arr[i - 1] = arr[i];
		}
		arr[i - 1] = '\0';
	}
}

int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	removeDuplicateArray(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	char str[100];
	cin >> str;
	removeDuplicateString(str);
	cout << str << endl;
}