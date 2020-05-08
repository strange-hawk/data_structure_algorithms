// there are two conventions for height
// - one is no. of edges
// - anaother is no. of nodes from the root to the farthest leaf node

#include<iostream>
#include<algorithm>
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

int height(Node *root){
    if (root != NULL){
        return 1+max(height(root->left),height(root->right));
    }
    else{
        return 0;
    }
}

// time complexity O(n)
// space O(h) (h+1) function callls in stack