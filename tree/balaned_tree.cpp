// a tree is said to be height balanced if the difference of height of left subtree and right subtree is atmost 1

#include<iostream>
#include<cmath>
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
    if (root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
bool is_balanced(Node *root){
    if (root == NULL){
        return true;
    }
    return ((abs(height(root->left)-height(root->right))<=1) && is_balanced(root->left) && is_balanced(root->right));
}
// time = O(n*n)

// efficient solution 👉
// return -1 if unbalanced
// else return height

// logic : before checking for a node, we check for its left child and right child if they are balanced or not
// basically we are combining both the functions

int isbalanced(Node *root){
    if(root == NULL){
        return 0;
    }
    int lh = isbalanced(root->left);
    int rh = isbalanced(root->right);
    if(lh == -1 or rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    return 1+max(lh,rh);
}
// time - O(n)