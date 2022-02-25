 void solve(int res,int N,bool flag,vector <int> &vec)
    {
        if(res==N)
        {
            vec.push_back(res);
            return;
        }
        
        if(res<=0)
        {
            flag=true;
        }
    
        
        if(res<=0 || flag==true)
        {
            vec.push_back(res);
            solve(res+5,N,flag,vec);
        }
        
         else
        {
            vec.push_back(res);
            solve(res-5,N,flag,vec);
        }
    }
    
    vector<int> pattern(int N)
    {
        int res=N;
        vector <int> vec;
        vec.push_back(res);
        solve(res-5,N,false,vec);
        return vec;
    }