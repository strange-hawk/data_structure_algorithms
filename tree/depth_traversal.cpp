#include<iostream>
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


// inorder
void inorder(Node *root){
    if (root != NULL){
        inorder(root->left);
        cout<<root->key;
        inorder(root->right);
    }
}
// time complexity -> O(n)
// auxiliary space -> O(h) atmost h+1 function calls


// preorder
void preorder(Node *root){
    if(root!=NULL){
        cout<<root -> key;
        preorder(root->left);
        preorder(root->right);
    }
}
// time complexity -> O(n)
// auxiliary space -> O(h)


// postorder
void postorder(Node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key;
    }
}
// time complexity -> theta(n)
// auxiliary space -> O(h) or more precisely theta(h)