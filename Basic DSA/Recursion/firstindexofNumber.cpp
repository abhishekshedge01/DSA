#include <bits/stdc++.h>
using namespace std;

int firstIndexOfArray(int* arr,int n,int x)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==x)
    {
        return 0;
    }
    
    int ans=firstIndexOfArray(arr+1,n--,x);
    if(ans==-1)
    {
        return -1;
    }
    else
    {
        return ans+1;
    }
}

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
    cout<<firstIndexOfArray(arr,n,x);
}