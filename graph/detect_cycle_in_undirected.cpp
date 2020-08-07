#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

bool cycle(vector<int> arr[], int start,bool visited[], int parent){
    visited[start]= true;
    for(auto i: arr[start]){
        if (!visited[i]){
            if (cycle(arr,i,visited,start)==true)
                return true;
        }
        else if(i!=parent){
            return true;
        }
    }
    return false;
}

bool cycleUtil(vector<int> arr[], int v){
    bool visited[v]={0};
    queue<int> q;
    for(int i=0;i<v; i++){
        if(!visited[i])
            if (cycle(arr,i,visited, -1)==true)
                return true;
    }
    return false;
}
int main(){

}

// complexity = O(V+E)