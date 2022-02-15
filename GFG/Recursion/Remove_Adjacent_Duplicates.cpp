void solve(string &s,int n)
    {
        int k=0;
        int i;
        for(i=1;i<n;++i)
        {
            if(s[i-1]!=s[i])
            {
                s[k++]=s[i-1];
            }
            else
            {
                while(s[i-1]==s[i])
                {
                    ++i;
                }
            }
        }
        s[k++]=s[i-1];
        s.erase(k);
        if(k!=n)
        {
            solve(s,k);
        }
    }
    
    string remove(string s)
    {
        int n=s.length();
        solve(s,n);
        return s;
    }