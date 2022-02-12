#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int n, int start, int end, int mid)
{
    int k=start;
    int i=start;
    int j=mid+1;
    int* temp=new int[n];
    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            ++i;
            ++k;
        }
        else
        {
            temp[k]=arr[j];
            ++j;
            ++k;
        }
    }

    while(i<=mid)
    {
        temp[k]=arr[i];
        ++i;
        ++k;
    }

     while(j<=end)
    {
        temp[k]=arr[j];
        ++j;
        ++k;
    }

    for(int i=start;i<=end;++i)
    {
        arr[i]=temp[i];
    }
}

void mergeSort(int *arr, int n, int start, int end)
{
    if (start < end)
    {
        int mid = start+(end-start)/2;
        mergeSort(arr, n, start, mid);
        mergeSort(arr, n, mid + 1, end);
        merge(arr, n, start, end, mid);
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    mergeSort(arr, n, start, end);
    print(arr, n);
}