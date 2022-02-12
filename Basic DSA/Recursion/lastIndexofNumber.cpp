#include <bits/stdc++.h>
using namespace std;

int lastIndexOfArray(int* arr,int n,int x)
{
    if(n==0)   //base case
    {
        return -1;
    }
    int ans=lastIndexOfArray(arr+1,n-1,x);  //recursion
    
    if(ans!=-1)
    {
        return ans+1;
    }
    else
    {
        if(arr[0]==x)
        {
            return 0;
        }
        else
        {
            return -1;
        }  
    }
}


// int alternate(int* arr,int n,int x)
// {
//     int ans=-1;
//     for(int i=0;i<n;++i)
//     {
//         if(arr[i]==x)
//         {
//             ans=i;
//         }
//     }
//     return ans;
// }

int main()
{
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<lastIndexOfArray(arr,n,x);
}