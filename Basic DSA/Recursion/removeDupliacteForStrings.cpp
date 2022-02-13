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


string removeDuplicate (string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    if (str[0] ==str[1])
    {
        return removeDuplicate(str.substr(1));
    }
    else
    {
        return str[0] + removeDuplicate(str.substr(1));
    }
}


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


int main()
{
	string str;
	cin >> str;
	cout << removeDuplicates(str) << endl;  // O(n2)


	string strx;
	cin >> strx;
	cout << removeDuplicate(strx) << endl;  // O(n2)


	char str1[100];
	cin >> str1;
	removeDuplicateString(str1);
	cout << str1 << endl;
 }