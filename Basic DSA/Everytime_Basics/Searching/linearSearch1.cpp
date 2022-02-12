#include <bits/stdc++.h>
using namespace std;

int linearSearch(int* arr, int n, int element)
{
   if(n==-1)
   {
       return -1;
   }
   if(arr[n]==element)
   {
       return n;
   }
   return linearSearch(arr,n-1,element);
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