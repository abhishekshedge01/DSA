#include <bits/stdc++.h>
using namespace std;

int strLength(char *str)
{
    if(str[0]=='\0')
    {
        return 0;
    }
    return strLength(str+1)+1;
}

int main()
{
    char str[100];
    cin>>str;
    cout<<strLength(str)<<endl;
}