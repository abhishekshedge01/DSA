#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(char* str)
{
   if(str[0]=='\0')
   {
       return;
   }
   if(str[1]=='\0')
   {
        return;
   }

   removeDuplicate(str+1);
   if(str[0]==str[1])
   {
       int i=1;
       for(;str[i]!='\0';++i)
       {
           str[i-1]=str[i];
       }
       str[i-1]=str[i];
   }
}

int main()
{
    char str[100];
    cin>>str;
    removeDuplicate(str);
    cout<<str<<endl;
}