#include <bits/stdc++.h>
using namespace std;
int binarySearch(int* arr,int start,int end, int n, int x)
{
    if(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
           return binarySearch(arr,start,mid-1,n,x);
        }
        else
        {
           return binarySearch(arr,mid+1,end,n,x);
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