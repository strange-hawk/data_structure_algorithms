// print the keys of a level in one line only
// logic - insert a NULL marking the end/beginning of a new level

#include<iostream>
#include<queue>
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

void printlevelorderline(Node *root){
    if (root == NULL){ return;}
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *temp = q.front();
        q.pop();
        if (temp ==NULL){
            q.pop();
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<temp->key;
        if(temp->left != NULL)
        {
            q.push(temp->left);
        }
        if(temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}