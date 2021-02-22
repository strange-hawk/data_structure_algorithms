#include<iostream>
#include<queue>
#include<vector>
#include<climits>
#include<list>
using namespace std;
typedef pair<int,int> ipair;
void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt) 
{ 
    adj[u].push_back(make_pair(v, wt)); 
    adj[v].push_back(make_pair(u, wt)); 
}
void shortestpath(vector<pair<int,int> > vec[],int s){
    priority_queue<ipair, vector<ipair>, greater<ipair> > makeheap;
    vector<int> dist(9,INT_MAX);
    vector<int> k(10,0);
    // inside minheap pair is <weight,vertex> but inside main it is pair<vertex,weight>
    makeheap.push(make_pair(0,s));
    dist[s]=0;
    while(!makeheap.empty()){
        int u = makeheap.top().second;
        makeheap.pop();
        
        for (auto x: vec[u]){
            int wt = x.second;
            int v = x.first;
            if(dist[v] > dist[u]+wt){
                dist[v] = dist[u]+wt;
                makeheap.push(make_pair(dist[v],v));
            }
        }
    }
    for (int i = 0; i < 9; ++i) 
        cout<<i<<" "<< dist[i]<<"\n";
}
    

int main(){
    int n=5;
    vector<pair<int,int> > adj[9];
    addEdge(adj, 0, 1, 4); 
    addEdge(adj, 0, 7, 8); 
    addEdge(adj, 1, 2, 8); 
    addEdge(adj, 1, 7, 11); 
    addEdge(adj, 2, 3, 7); 
    addEdge(adj, 2, 8, 2); 
    addEdge(adj, 2, 5, 4); 
    addEdge(adj, 3, 4, 9); 
    addEdge(adj, 3, 5, 14); 
    addEdge(adj, 4, 5, 10); 
    addEdge(adj, 5, 6, 2); 
    addEdge(adj, 6, 7, 1); 
    addEdge(adj, 6, 8, 6); 
    addEdge(adj, 7, 8, 7);
    // for(auto i : vec){
    //     for(auto j : i){
    //         cout<<j.first<<" "<<j.second<<" ";
    //     }
    //     cout<<endl;
    // }
    shortestpath(adj,4);
}