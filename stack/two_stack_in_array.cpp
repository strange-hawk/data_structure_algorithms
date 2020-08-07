#include<iostream>
#include<stack>
using namespace std;

// idea -> top1 = -1, top2 = n , fill the right stack in reverse order viz right to left, and left stack from left to right
// with the division as two equal stacks, space will not be allocated efficiently
struct TwoStack{
    int *arr, cap,top1,top2;
    TwoStack(int x){
        arr = new int[x];
        cap=x;
        top1=-1;
        top2=cap;
    }
    void push1(int k){
        if(top1<top2-1){
            arr[++top1]=k;
        }
    }
    void push2(int k){
        if(top2>top1+1){
            arr[--top2]=k;
        }
    }
    int pop1(){
        if(top1>=0)
            return arr[top1--];
        exit(1);
    }
    int pop2(){
        if(top2<cap)
            return arr[top2++]; 
        exit(1);
    }
};