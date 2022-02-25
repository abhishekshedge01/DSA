bool solve(int n,int counter)
    {
        if(counter>n)
        {
            return true;
        }
        if(n%counter==0)
        {
            return false;
        }
        n=n-(n/counter);
        return solve(n,++counter);
    }
    
public:
    bool isLucky(int n) 
    {
        int counter=2;
        return solve(n,counter);
    }