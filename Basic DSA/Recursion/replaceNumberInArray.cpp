#include<bits/stdc++.h>
using namespace std;

void replace(int* arr,int x,int n,int rep)
{
    if (n == 0)
    {
        return;
    }
    if (arr[0] == x)
    {
        arr[0] = rep;
    }
    replace(arr+1,x,n-1, rep);
}

int main()
{	
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int x,rep;
    cin >> x>>rep;
	replace(arr,x,n,rep);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}