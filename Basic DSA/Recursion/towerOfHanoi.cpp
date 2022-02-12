#include<bits/stdc++.h>
using namespace std;

void towerofHanoi(int n,char start,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    towerofHanoi(n-1,start,helper,dest);
    cout<<start<<"->"<<dest<<endl;
    towerofHanoi(n-1,helper,dest,start);
}

int main()
{
   int n;
   cin>>n;
   char start='A',dest='C',helper='B';
   towerofHanoi(n,start,dest,helper);
}