#include <bits/stdc++.h>
using namespace std;

void insert(vector <int> &vec,int temp)
{
    if(vec.size()==0 || vec[vec.size()-1]<=temp)
    {
        vec.push_back(temp);
        return;
    }
    int val=vec[vec.size()-1];
    vec.pop_back();
    insert(vec,temp);
    vec.push_back(val);
}

void sortArray(vector <int> &vec)
{
    if(vec.size()==0)
    {
        return;
    }
    int temp=vec[vec.size()-1];
    vec.pop_back();
    sortArray(vec); 
    insert(vec,temp);
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
   sortArray(vec);
   for(int i=0;i<n;++i)
   {
       cout<<vec[i]<<" ";
   }
   cout<<endl;
}