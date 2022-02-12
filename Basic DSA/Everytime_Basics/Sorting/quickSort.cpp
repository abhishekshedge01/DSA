#include <bits/stdc++.h>
using namespace std;

int Partition(int* arr,int n,int start,int end)
{
    int i=start-1;
    int pivot=end;
    for(int j=start;j<end;++j)
    {
        if(arr[j]<arr[pivot])
        {
            ++i;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}

void quickSort(int* arr,int n,int start,int end)
{
    if(start<end)
    {
        int p=Partition(arr,n,start,end);
        quickSort(arr,n,start,p-1);
        quickSort(arr,n,p+1,end);
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
    //here//
    int start=0,end=n-1;
    quickSort(arr,n,start,end);
    print(arr, n);
}