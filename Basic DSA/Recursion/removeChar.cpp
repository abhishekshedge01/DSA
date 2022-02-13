#include <bits/stdc++.h>
using namespace std;


string removeString(string str, char x)
{
    if (str.length() == 0)
    {
        return "";
    }
    if (str[0] == x)
    {
        return removeString(str.substr(1), x);
    }
    else
    {
        return str[0] + removeString(str.substr(1), x);
    }
}

void removeX(char* str, char x)
{
    if (str[0] == '\0')
    {
        return;
    }
    removeX(str + 1, x);
    if (str[0] == x) {
        int i = 1;
        for (; i < str[i] != '\0'; ++i)
        {
            str[i - 1] = str[i];
        }
        str[i - 1] = '\0';
    }
}

int main()
{
    char str[100];
    cin >> str;
    char x;
    cin >> x;
    removeX(str, x);
    cout << str << endl;
    string newstr;
    cin >> newstr;
    cout<<removeString(newstr, x);
}