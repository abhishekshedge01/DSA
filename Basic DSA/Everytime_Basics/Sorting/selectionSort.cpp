#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr,int n, int start,int end)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

void print(int *arr, int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    selectionSort(arr,n,start,end);
    print(arr,n);
}