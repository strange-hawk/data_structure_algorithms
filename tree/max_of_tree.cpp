// output the maximum of tree

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

int maxr(Node *root){
    if (root==NULL){
        return -999;
    }
    else{
        int m = -1;
        queue <Node *> q;
        q.push(root);
        while(q.empty() == false){
            Node *temp = q.front();
            m = max(temp->key,m );
            if(temp->left !=NULL){
                q.push(temp->left);
            }
            if(temp->right !=NULL){
                q.push(temp->right);
            }
        }
        return m;
    }
    return 0;
}
// space = O(width of the tree)

int maxr(Node *root){
    if(root == NULL){
        return INT64_MIN;
    }
    else{
        return max(root->key, max(maxr(root->left),maxr(root->right)));
    }
}
// time complexity = O(n)
// space complexity = O(h)