#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr,int n, int start,int end)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
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
    bubbleSort(arr,n,start,end);
    print(arr,n);
}