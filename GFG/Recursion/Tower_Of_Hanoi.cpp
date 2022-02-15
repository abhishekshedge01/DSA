if(N==0)
        {
            return 0;
        }
        long long ans1=toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        long long ans2=toh(N-1,aux,to,from);
        return 1+ans1+ans2;