#include <bits/stdc++.h>
using namespace std;

void isSorted(int* arr,int n)
{
    if(n==0 || n==1)
    {
        cout<<"yup"<<endl;
        return;
    }
    if(arr[0]>arr[1])
    {
        cout<<"nope"<<endl;
        return;
    }
   isSorted(arr+1,n-1);
}



bool checkIfSorted(vector <int> vec,int i)
{
	if (i>=vec.size()-1)
	{
		return true;
	}
	if (vec[i] > vec[i+1])
	{
		return false;
	}
	return checkIfSorted(vec, ++i);
}


int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    isSorted(arr,n);
}