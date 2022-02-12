#include <bits/stdc++.h>
using namespace std;

void reverseVoid(string str)
{
	if (str.length() == 0)
	{
		return;
	}
	reverseVoid(str.substr(1));
	cout << str[0];
}

string reverseString(string str)
{
	if (str.length() == 0)
	{
		return "";
	}
	char ch = str[0];
	string rev = reverseString(str.substr(1));
    return rev + ch;
}

void reverseUsingi(string &str, int i,int n)
{
	if (i > n / 2)
	{
		return;
	}
	swap(str[i], str[n - i - 1]);
	reverseUsingi(str, ++i,n);
}

int main()
{
	string str;
	cin >> str;
	reverseVoid(str);
	cout << "\n";// O(n2) approach n-1+n-2+n-3+n-4....1=n(n+1)/2
	cout << reverseString(str) << endl;;  // O(n2) approach n-1+n-2+n-3+n-4....1=n(n+1)/2
	reverseUsingi(str,0,str.length());  //O(n) approach by pasing i and swapping values
	cout << str << endl;
}