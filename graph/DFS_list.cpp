#include<iostream>
#include<vector>
using namespace std;
void DFS(vector<int> vec[],int v, int s, bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    for(int i=0;i<vec[s].size();i++){
        if(!visited[vec[s][i]]){
            DFS(vec,v,vec[s][i],visited);
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
    bool visited[7] = {false};
    DFS(vec,7,1,visited);
}

// for disconnected same as that of bfs
// to count islands, same as count parameter in that of bfs