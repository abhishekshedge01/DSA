class Solution
{
    public:
    int solution(vector <int> &vec,int k,int i)
    {
        if(vec.size()==1)
        {
            return vec[0];
        }
        i=(i+k-1)%vec.size();
        vec.erase(vec.begin()+i);
        return solution(vec,k,i);
    }


    int josephus(int n, int k)
    {
        vector <int> vec(n);
       for(int i=0;i<n;++i)
       {
           vec[i]=i+1;
       }
       return solution(vec,k,0);
    }
};