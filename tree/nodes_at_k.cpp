// print nodes at (k+1)th level

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

void print_node(Node* root, int k){
    if (root == NULL){
        return;
    }
    if(k==0){
        cout<< root->key;
    }
    else{
        print_node(root->left,k-1);
        print_node(root->right,k-1);
    }
}
// space = O(h)
// time = O(n)