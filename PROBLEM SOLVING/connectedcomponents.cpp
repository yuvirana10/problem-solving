#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int DFSR(int i,vector<int>Adj[],vector<int>&status,int m){
    m++;
    status[i]=1;
    cout<<i<<" ";
    for(int j=0; j<Adj[i].size();j++){
        if(status[Adj[i][j]]==0){
            m = DFSR(Adj[i][j],Adj,status,m);
        }
    }
    return m;
}

int DFS(vector<int>Adj[],int N){
    vector<int>result;
    int c=0;
    int m;
    vector<int>status(N,0);

    for(int i=0;i<N;i++){
        if(status[i]==0){
            m = DFSR(i,Adj,status,0);
            c++;
            result.push_back(m);
        }
    }
    cout<<"\nno of elements";

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return c;
}

int main()
{
    int i,j,N,E,x;
    cout<<"no of vertices"<<endl;
    cin>>N;
    cout<<"no of edges";
    cin>>E;
    vector<int>Adj[N];
    for(i=1;i<=E;i++){
        int a,b;
        cout<<"enter the path from edge"<<i<<endl;
        cin>>a>>b;
        Adj[a].push_back(b);
         Adj[b].push_back(a);
    }

    for(int i=0;i<N;i++){
        cout<<i<<": ";
        for(int j=0;j<Adj[i].size();j++){
            cout<<Adj[i][j]<<" ";
        }
        printf("\n");
    }
   cout<<"connecting component="<<DFS(Adj,N);
    cout<<endl;}
