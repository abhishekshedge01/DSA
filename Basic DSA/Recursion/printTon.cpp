
#include <bits/stdc++.h>
using namespace std;

//prints from n to 1
void print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    print(n-1);
}


//prints from 1 to n

// void print(int n)
// {
//     if(n==0)
//     {
//         return;
//     }    
//     print(n-1);
//     cout<<n<<endl;
// }

int main()
{
    int n;
    cin>>n;
    print(n);
}