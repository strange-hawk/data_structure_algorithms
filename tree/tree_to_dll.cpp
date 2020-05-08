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
// idea : inorder traversal, maintain a previous and next pointer
void tree_to_dll(Node *root, Node **head) 
{ 
    if (root == NULL) return; 
    static Node* prev = NULL;
    tree_to_dll(root->left, head); 
    if (prev == NULL) 
        *head = root; 
    else
    { 
        root->left = prev; 
        prev->right = root; 
    } 
    prev = root;
    tree_to_dll(root->right, head); 
}
// time - O(n)
// sapce - O(h) for function calls