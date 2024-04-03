#include<iostream>
#include<vector>

using namespace std;
    int main(){
        int N,E,a,b;
    cout<<"Enter the no. of vertices in graph:=> ";
    cin>>N;
    cout<<"Enter the no. of edges in graph:=> ";
    cin>>E;
    vector<int>adj[N];
    for(int i=1;i<=E;i++){
   cout<<"Enter the end points of edge i"<<i<<" ";
   cin>>a>>b;
   adj[a].push_back(b);
   adj[b].push_back(a);
   for(int i=0;i<N;i++){
    cout<<i<<":";
    for(int j=0;j<adj[j].size();j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
   }
    }
return 0;
}