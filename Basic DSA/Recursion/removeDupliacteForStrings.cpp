#include<bits/stdc++.h>
using namespace std;

// void print(int* arr,int n)
// {
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout << arr[i]<<" ";
// 	}
// 	cout << endl;
// }


string removeDuplicates(string str)
{
	if (str.length() == 0)
	{
		return "";
	}
	char a = str[0];
	string removed = removeDuplicates(str.substr(1));
	if (removed[0] == a)
	{
		return removed;
	}
	else
	{
		return a + removed;
	}
}

int main()
{
	string str;
	cin >> str;
	cout<< removeDuplicates(str)<<endl;  // O(n2)
}