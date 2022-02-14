void insert(stack <int>&s,int x)
{
    if(s.empty() || s.top()<=x)
    {
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,x);
    s.push(temp);
}


void solve(stack <int> &s)
{
    if(s.empty())
   {
       return;
   }
   int x=s.top();
   s.pop();
   solve(s);
   insert(s,x);
}
