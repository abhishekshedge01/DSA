void solve(stack <int> &s ,int k)
    {
       if(k==0)
       {
           s.pop();
           return;
       }
       int x=s.top();
       s.pop();
       solve(s,k-1);
       s.push(x);
    }
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int i=0;
        solve(s,(sizeOfStack/2));
    }