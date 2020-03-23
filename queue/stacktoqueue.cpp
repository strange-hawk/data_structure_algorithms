#include<iostream>
#include<stack>
using namespace std;
stack<int> push(int n, stack<int> s1){
    stack<int> s2;
    s2.push(n);
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.swap(s2);
    return s1;
}
int main(){
    stack<int> queue;
    queue.push(12);
    queue.push(23);
    queue.push(34);
    queue.push(45);
    queue.push(56);
    while(!queue.empty()){
        cout<<queue.top()<<" ";
        queue.pop();
    }
    cout<<endl;
}