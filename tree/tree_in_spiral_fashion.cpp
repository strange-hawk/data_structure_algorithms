// print tree in spiral form
// 1st level as left->right
// 2nd level as right->left
// 3rd level as left->right
// ...

// idea -> maintain a queue and then reverse the queue as when required using a flag value
#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left= right = NULL;
    }
};
// true :: left->right
void print_spiral(Node *root,bool flag){
    if(root== NULL){
        return;
    }
    queue<Node *>q;
    stack<Node *>s;
    q.push(root);
    while(q.empty()==false)
    {
        int count = q.size();
        for(int i=0;i<count;i++){
            Node *temp = q.front();
            q.pop();
            if(flag){
                cout<<temp->key;
            }
            else{
                s.push(temp);
            }
            if(temp->left != NULL){ q.push(temp->left);}
            if(temp->right != NULL){q.push(temp->right);}
        }
        if(flag == false){
            while(s.empty()==false){
                cout<<s.top()->key<<" ";
                s.pop();
            }
        }
        cout<<endl;
        flag = !flag;
    }
}
// time - O(n/2 + 4*n) -> O(n)

// more efficient solution

//  maintain two stacks
// 1. push root to stack 1
// 2. while any of the thwo stack is not empty
//      while s1 is not empty
//          take out node and print it
//          push children of the taken into 2nd stack       left,right
//      while s2 is not empty
//          take out node and print it
//          push chldren of the taken into 1st stack in 👉reversed👈 order      right,left

// time - (2*n) -> O(n)