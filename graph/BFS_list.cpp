#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
// for connected
void bfs(vector<int> arr[],int v, int start){
    queue<int> q;
    q.push(start);
    bool visited[v]={0};
    visited[start]=1;
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : arr[u]){
            if(visited[v]==0){
                q.push(v);
                visited[v]=1;
            }
        }
    }

}
int main(){
    vector<int> vec[7];
    vec[0].push_back(1);
    vec[0].push_back(2);
    vec[1].push_back(0);
    vec[1].push_back(3);
    vec[2].push_back(0);
    vec[2].push_back(5);
    vec[2].push_back(6);
    vec[3].push_back(1);
    vec[3].push_back(4);
    vec[4].push_back(3);
    vec[4].push_back(5);
    vec[5].push_back(2);
    vec[5].push_back(4);
    vec[6].push_back(2);
    bfs(vec,7,3);
    cout<<"\n";
}

// for disconnected graph

void DFSUtil(vector<int>arr[], int v){
    bool visited[v+1]={0};
    int count=0;
    for(int i=0;i<=v;i++){
        if(!visited[i]){
            BFS(arr,v,i,visited);
            count++;}
    }
}
// count gives the number of connected components

void BFS(vector<int> arr[],int v, int start, bool visited[]){
    queue<int> q;
    visited[start]=true;
    while(!q.empty()){
        int a = q.front();
        q.pop();
        cout<<a<<" ";
        for(auto i: arr[a]){
            if(!visited[i]){
                visited[i]=true;
                q.push(i);
            }
        }
    }
}