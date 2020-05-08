// the sum of children nodes should be equal to the parent node

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

bool children_sum(Node *root){
    if(root == NULL){
        return true;
    }

    if(root->left == NULL && root->right == NULL){
        return true;
    }

    int sum=0;
    if(root->left != NULL){
        sum += root->left->key;
    }
    if(root->right != NULL){
        sum += root->right->key;
    }

    return ((root->key==sum) && children_sum(root->left) && children_sum(root->right));

    
}

// time - O(n)
// space- O(h)

int main(){
    Node *root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);
    root->right->right = new Node(2);
    root->right->left = new Node(1);
    cout<<children_sum(root);
    // preorder(root);
}