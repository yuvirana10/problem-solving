    int downToZero(int n) {
    queue<int>Q;
    vector<int>status(n+1);
    Q.push(n)
    while(1)
    {
        int x=Q.front();
        Q.pop();
        if(x!=0)
        {
            for(int i=2;i<=sqrt(x);i++)
            {
                int y=x/i;
                if(i*y==x)
                {
                    int z=max(i,y);
                    if(status[z]==0)
                    {
                        status[z]=status[x]+1;
                        Q.push(z);
                    }
                }
            }
            if(status[x-1]==0)
            {
                status[x-1]=status[x]+1;
                Q.push(x-1);
                if(x-1==0)
                return status[x-1];
            }
        }
        else 
        return 0;
    }
