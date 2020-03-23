// given an almost sorted array, sort it
//  given a k and also given that element is within k distance of its sorted position
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> > pq;
    int oi = 0;
    int arr[]={9,8,7,18,19,17};
    for(int i=0;i<=k;i++){
        pq.push(arr[i]);
    }
    for(int i=k+1;i<=n-1;i++){
        arr[oi]=pq.top();
        pq.pop();
        oi++;
        pq.push(arr[i]);
    }
    cout<<oi<<"\n";
    while(!pq.empty()){
        arr[oi++]=pq.top();
        pq.pop();
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

}