#include <bits/stdc++.h>
using namespace std;

void insertionSort(int* arr, int n)
{
    for(int i=1;i<n;++i)
    {
        int j=i-1;
        int value=arr[i];
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=value;
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
    insertionSort(arr,n);
    print(arr,n);
}