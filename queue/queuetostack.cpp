#include<iostream>
#include<queue>
using namespace std;
queue<int> push(int n,queue<int> q1){
        queue<int> q2;
        q2.push(n);
        while(!q1.empty()){
            q2.push(q1.front());
            q2.pop();
        }
        q1.swap(q2);
        return q1;
    }
int main(){
    queue<int> stack;
    stack.push(1);
    stack.push(23);
    stack.push(34);
    stack.push(45);
    while(!stack.empty()){
        cout<<stack.front()<<" ";
        stack.pop();
    }
    cout<<endl;
}