#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool cycleUtil(vector<int> vec[], int i,bool visited[] ,bool recStackTree[]){
    visited[i]=true;
    recStackTree[i]=true;
    for(auto j: vec[i]){
        if(visited[j]==false){
            if (cycleUtil(vec,j,visited,recStackTree)==true)
                return true;
        }
        else if(recStackTree[j]==true){
            return true;
        }
    }
    recStackTree[i]=false;
    return false;
}

bool cycle_detect(vector<int> arr[],  int v){
    bool visited[v]={false};
    bool recStackTree[v]={false};
    for(int i=0;i<v;i++){
        if(!visited[i]){
            if(cycleUtil(arr,i,visited,recStackTree)==true)
                return true;
        }
    }
    return false;
}
int main(){

}

