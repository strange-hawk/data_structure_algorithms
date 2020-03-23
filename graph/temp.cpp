//  check for cycle in an undirected graph


// logic : do DFS/BFS, check for visited in all adjacent xcept the parent one
// why not BFS/DFS ??
// if the graph is like 1 -> 2
                     // 2 -> 3
                     // 3 -> 1
                    //  then for 2 it would seee that 1 is already visited so, it would detect it as cycle
bool DFS(int s,vector<int> adj[],int V, int parent){
    visited[s]=true;
    for(int v:adj[s]){
        if(visited[v] && v!=parent){
            return true;
        }
        if(!visited[v]){
            DFS(v,adj,V,s);
        }
    }
}


//  check for cycle in directed graph

// logic:  why not previous one ??
// counter example - (0,1), (1,2) , (1,3) , (3,2)
// we will use concept of back edge
//  if there is a link to the ancestor, then we can say that there is a cycle 
bool record_anc[V] = false;
vector<int> adj[V];
bool visited[V] = false;
bool isCyclic(vecto<int> adj, int v, bool visited[] , bool record_anc[]){
    if visited[v]==false{
        record_anc[v]=true;
        visited[v]=true;
        for(int i: adj[v]){
            if(!visited[i] && isCyclic(adj,i,visited,record_anc)){
                return true;
            }
            else if(record_anc[i]==true){
                return true;
            }
        }
    }
    record_anc[v]=false;
    return false;
}