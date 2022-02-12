#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str,int i,int n)
{
    if(n==0)
    {
        return;
    }
    if(i>n/2)
    {
        cout<<"is a Palindrome"<<endl;
        return;
    }
    if(str[i]!=str[n-i-1])
    {
        cout<<"Not a a palindrome"<<endl;
        return;
    }
    isPalindrome(str,++i,n);
}



int main()
{
    string str;
    cin>>str;
    int n=str.length();
    isPalindrome(str,0,n);
}