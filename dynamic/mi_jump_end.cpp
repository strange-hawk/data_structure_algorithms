#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int func(vector<int> &vec){
    pair<int,int> curr_pos(0,0);
    int count=0,can_reach=-1;
    while(true){
        count++;
        for(int i=curr_pos.first;i<=curr_pos.second;i++){
            can_reach =max(can_reach,i+vec[i]);
        }
        if(can_reach>=vec.size()-1)
            return count;
        curr_pos = make_pair(curr_pos.second+1,can_reach);
        if(curr_pos.first> curr_pos.second){
            return -1;
        }

        
    }
}
int main(){
    int arr[]={4,2,3,0,3,1,2};
    vector<int> vec(arr,arr+(sizeof(arr)/sizeof(arr[0])));
    cout<<func(vec)<<endl;


}