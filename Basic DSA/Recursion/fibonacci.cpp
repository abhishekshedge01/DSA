#include <bits/stdc++.h>
using namespace std;

int fibbonaci(int n)
{
    if(n<=1)
    {
        return 0;
    }
    if(n==2)
    {
        
        return 1;
    }
    return fibbonaci(n-1)+fibbonaci(n-2);
}

// int fibbonaci(int n)
// {
//     if(n<=1)
//     {
//         return 0;
//     }
//     if(n==2)
//     {
//         return 1;
//     }
//     int a=0,b=1,c;
//     for(int i=3;i<=n;++i)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return c;
// }

int main()
{
    int n;
    cin>>n;
    cout<<fibbonaci(n);
}