// print the maximum distance between any two nodes of a binary tree

// idea -> find the following for each node and return max -> max(1+left_child_height+right_child_height)

#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
#include<unordered_map>
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
// method -3
int h=0;
int diameter(Node *root){
    if(root == NULL){
        return 0;
    }
    int lh = diameter(root->left);
    int rh = diameter(root->right);
    h= 1+max(lh,rh);
    return max(1+lh+rh,max(lh,rh));
}

// method-1
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

int diameter(Node *root){
    if(root == NULL){
        return 0;
    }
    int d1 = 1+height(root->left)+height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1,max(d1,d2));
}
// time -> O(n*n) for skewed tree


// method-2
// idea - store the height of each node using hash map
// extra O(n) for hashmap

// method-3
