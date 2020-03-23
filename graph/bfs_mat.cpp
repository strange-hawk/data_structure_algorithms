#include<iostream>
#include<vector>
using namesoace std;
void DFS(int arr[][6],int n, vector<int> vec, bool visited[]){
    int count=0;
    for(int i=0;i<6;i++){
        if(visited[i]==true){
            count++;
        }
    }
    if(count==6){
        return ;
    }
    vector<int> v;
    for(auto i: vec){
        if(arr[n])
    }
}
int main(){
    int arr[6][6];
    memset(arr,0,sizeof(arr));
    arr[0][1]=arr[1][0]=1; //(a,b)
    arr[1][2]=arr[2][1]=1; //(b,c)
    arr[0][2]=arr[2][0]=1; //(a,c)
    arr[1][4]=arr[4][1]=1; //(b,e)
    arr[2][3]=arr[3][2]=1; //(c,d)
    arr[3][4]=arr[4][3]=1; //(d,e)
    arr[4][5]=arr[5][4]=1; //(e,f)

    bool visited[]={false,false,false,false,false,false};
    // DFS(arr,6,3,visited);
    cout<<3<<" ";
    visited[3]=true;
    vector<int> vec;
    for(int i=0;i<6;i++){
        if(arr[3][i]==1 && visited[i]==false){
            cout<<i<<" ";
            visited[i]=true;
            vec.push_back(i);
        }
    }
    DFS(arr,6,vec,visited);
    cout<<endl;

}