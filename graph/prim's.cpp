#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
// #include<priority_queue>
#define size 5
using namespace std;
typedef pair<int, int> ipair;

int main(){
    int graph[][size] = {{0, 2, 0, 6, 0},
                 {2, 0, 3, 8, 5},
                 {0, 3, 0, 0, 7},
                 {6, 8, 0, 0, 9},
                 {0, 5, 7, 9, 0}};


    // adjacency matrix ......


    vector<bool> visited1(size, false);
    vector<int> key(size, INT_MAX);
    vector<int> vec;
    int arr[7];
    int start = 0;
    // visited1[start]=0;
    key[0]=0;


    // getting min_index
    for(int i=0;i<size;i++){
        int u= -1;
        for(int j=0;j<size;j++){
            if(!visited1[j] && (u==-1 || key[j]<key[u]))
                u=j;
        }
        visited1[u]=true;
        for(int v=0;v<size;v++){
            if(graph[u][v]>0 && !visited1[v]){
                key[v] = min(key[v],graph[u][v]);
            }
        }
    }
    cout<<"adjacency matrix...........................\n\n";
    for(int i=0;i<size;i++)
        cout<<key[i]<<" ";
    cout<<endl;








    // ADJACENCY LIST..................................

    vector<ipair> graphList[size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(graph[i][j] > 0){
                graphList[i].push_back(make_pair(j,graph[i][j]));
            }
        }
    }
    unordered_map<int,pair<int,int> > hash;
    for(int i=0;i<size;i++){
        hash[i] = make_pair(i,0);
    }
    hash[0]=make_pair(0,0);
    // for(auto i: graphList){
    //     for(auto j:i){
    //         cout<<j.first<<"->"<<j.second<<"\t";
    //     }
    //     cout<<endl;
    // }
    priority_queue <ipair, vector<ipair>, greater<ipair> > pq;
    start=0;
    pq.push(make_pair(0,start));
    vector<bool> visited(size,false);
    vector<int> dis(size,INT_MAX);
    dis[0]=0;
    while(!pq.empty()){
        int edge_start=pq.top().second, weight=pq.top().first;
        pq.pop();
        visited[edge_start]=true;
        for (auto j: graphList[edge_start]){
            int w=j.second,vertex=j.first;
            if(!visited[vertex] && dis[vertex]>w){
                hash[vertex] = make_pair(edge_start,w);
                // hash[edge_start] = make_pair(vertex,w);
                dis[vertex]= w;
            }
            if(!visited[vertex]){
                pq.push(make_pair(w,vertex));
            }
        }
    }

    cout<<endl;
    cout<<"adjacency list...............................\n\n";
    for(int i=1;i<size;i++){
        cout<<hash[i].first<<"->"<<i<<"\t"<<hash[i].second<<endl;
    }
    // for(auto i: hash)
    //     cout<<i<<"  ";
    cout<<endl;


}