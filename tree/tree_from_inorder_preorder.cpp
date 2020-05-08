// a tree can be constructed iff atleast 2 traversals are given with one of them should be inorder traversal

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
int preorder = 0;
Node *ctree(int in[],int pre[],int is, int ie){
    if (is>ie){
        return NULL;
    }
    Node *root = new Node(pre[preorder]++);
    int inIndex;
    for(int i=is;i<ie;i++){
        if(in[i]==root->key){
            inIndex = i;
            break;
        }
    }
    root->left = ctree(in,pre,is,inIndex-1);
    root->right = ctree(in,pre,inIndex+1,ie);
    return root;
}

int main(){
int inorder[] = {20,10,40,30,50};
int preorder[] = {10,20,40,40,50};
}
// time = O(n^2) due to loop
// hashing - O(n) - idea is to maintain a hash table of index as well as their entries

