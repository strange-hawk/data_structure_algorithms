#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
void bfs(vector<int> arr[],int v, int start){
    queue<int> q;
    q.push(start);
    bool visited[7]={0};
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