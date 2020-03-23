// 2. given an unsorted array, find k largest eleemtns in it
// naive approach 
// using max heap
// make  min heap of first k elements
// traverse from k+1th element 
// // compare with root - if smaller than root ignore it
// //                   - if larger than remove root and input element
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={9,7,6,4,67,3,1,2,4,5,8,95};
    int k=2;
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<=11;i++){
        if(arr[i]<pq.top()){
            continue;
        }
        if(arr[i]>pq.top()){
            pq.pop();
            priority_queue<int, vector<int>, greater<int> > temp;
            while(!pq.empty()){
                temp.push(pq.top());
                pq.pop();
            }
            pq.push(arr[i]);
            while(!temp.empty()){
                pq.push(temp.top());
                temp.pop();
            }
        }
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}