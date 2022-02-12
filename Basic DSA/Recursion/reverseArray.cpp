#include <bits/stdc++.h>
using namespace std;

// void insert(vector <int> &vec,int temp)
// {
//     if(vec.size()==0)
//     {
//         vec.push_back(temp);
//     }
//     int val=vec[vec.size()-1];
//     insert(vec,temp);
//     vec.push_back(val);
// }

// void reverse(vector <int> &vec)
// {
//     if(vec.size()==0)
//     {
//         return;
//     }
//     int temp=vec[vec.size()-1];
//     reverse(vec);
//     insert(vec,temp);
// }

void reverse(vector <int> &vec,int n,int i)
{
    if(vec.size()==0)
    {
        return;
    }
    if(i>=n/2)
    {
        return;
    }
    swap(vec[i],vec[n-i-1]);
    reverse(vec,n,++i);
}

int main()
{
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0;i<n;++i)
    {
        cin>>vec[i];
    }
    reverse(vec,n,0);
    for(int i=0;i<n;++i)
    {
        cout<<vec[i]<<" ";
    }
}