#include<iostream>
#include<queue>
using namespace std;

void shortest_path(vector<int> graph[], int v, int start,int dist[]){
    bool visited[v] = {false};
    queue<int>q;
    q.push(start);
    dist[start]=0;
    visited[start]=true;
    while(!q.empty()){
        int u = q.front();
        for(auto i: graph[u]){
            if(!visited[i]){
                visited[i]=true;
                dist[i]=dist[u]+1;
                q.push(i);
            }
        }
    }
}

int main(){
int v = 10;
int dist[v] = {INT32_MAX};
vector<int> graph[v];
int start;
shortest_path(graph,v,start,dist);
}