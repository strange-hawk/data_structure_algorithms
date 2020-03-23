#include<iostream>
using namespace std;

void DFS(int arr[][6],int V, int search, bool visited[]){
        if(visited[search]==false){
            cout<<search<<" ";
            visited[search]=true;
        
    for(int i=0;i<V;i++){
        if(arr[search][i]==1){
            DFS(arr,V,i,visited);
        }}
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
    DFS(arr,6,3,visited);
    cout<<endl;

}