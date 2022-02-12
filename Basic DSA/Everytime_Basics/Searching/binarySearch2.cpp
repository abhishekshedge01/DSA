#include <bits/stdc++.h>
using namespace std;
int binarySearch(int* arr,int start,int end, int n, int x)
{
    if(start>end)
    {
        return -1;
    }
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            end=mid-1;
        }
        else
        {
           start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Element to find: ";
    cin>>x;
    int start=0,end=n-1;
    cout<<binarySearch(arr,start,end,n,x);
}