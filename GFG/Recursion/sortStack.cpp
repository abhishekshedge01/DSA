void insert(stack <int> &s,int store)
{
    if(s.empty() || s.top()<=store)
    {
        s.push(store);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,store);
    s.push(temp);
}

void sortS(stack <int> &s)
{
    if(s.empty())
       {
           return;
       }
       int store=s.top();
       s.pop();
       sortS(s);
       insert(s,store);
}

void SortedStack :: sort()
{
   sortS(s);
}