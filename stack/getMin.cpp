#include<iostream>
#include<stack>
using namespace std;
// getMin in O(1) time
// change the push,pop operations of stack

void push(int x, stack<int>s ,stack<int> aux_stack){
    s.push(x);
    if (aux_stack.empty()==true)
        aux_stack.push(x);
    else if(x<=aux_stack.top())
        aux_stack.push(x);
}
void pop(stack<int>s, stack<int> aux_stack){
    int t = s.top();
    if(t == aux_stack.top())
        aux_stack.pop();
    s.pop();
}

int getMin(stack<int> aux_stack){
    return aux_stack.empty()==true? NULL : aux_stack.top();
}