#include<iostream>
#include<algorithm>
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

int width_tree(Node* root){
    if(root == NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    // q.push(NULL);
    int width=0;
    while(q.empty()==false){
        int t = q.size();
        width  = max(width,t);
        for(int i=0;i<q.size();i++){
            Node *temp= q.front();
            q.pop();
            if(temp->left != NULL){q.push(temp->left);}
            if(temp->right != NULL){q.push(temp->right);}
        }
        
    }
    return width;

}
// time = O(n);
// space = O(n)