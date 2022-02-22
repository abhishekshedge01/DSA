long long power(int N,int R)
    {
      if(R==0)
      {
          return 1;
      }
      long long ans=power(N,R/2);
      ans=(ans*ans)%1000000007;
      if(R%2==0)
      {
          return ans;
      }
      else
      {
          return ans*N%1000000007;
      }
    }