#include <bits/stdc++.h>
using namespace std;

int linearSearch(int* arr, int n, int element)
{
    for(int i=0;i<n;++i)
    {
        if(element==arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element you want to find: ";
    cin>>element;
    cout<<linearSearch(arr,n,element)<<endl;
}