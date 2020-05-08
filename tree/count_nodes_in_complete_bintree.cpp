// complete binary tree - a tree in which all the levels are completely filled except the last level
// the filling of the last level are done from left to right

#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
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

// save time in calculating no. of nodes if it is perfect binary tree
// skip traversal in the inner nodes if it is complete binary tree

int count_nodes(Node *root){
    int lh=0,rh=0;
    Node *curr= root;
    while(curr!=NULL){
        lh++;
        curr = curr->left;
    }
    Node *curr= root;
    while(curr!=NULL){
        rh++;
        curr=curr->right;
    }
    if (lh==rh){
        return pow(2,lh)-1;
    }
    return 1+count_nodes(root->left)+count_nodes(curr->right);
}

// T(n) < T(2n/3) + theta(h)
// O(log(n)/log(3/2) * log(n)/log(2))
// O(log(n) *log(n))