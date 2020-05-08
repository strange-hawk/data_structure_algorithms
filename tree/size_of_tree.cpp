// no, of nodes of a tree
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

int getsize(Node *root){
    if (root == NULL){
        return 0;
    }
    else{
        return 1+getsize(root->left) + getsize(root->right);
    }
}
// time complexity = O(n)
// space complexity =  O(h) at any moment the function calls is (h+1) stack calls

// alternate using iteratively
// perform level order traversal using queue and then count the number of nodes