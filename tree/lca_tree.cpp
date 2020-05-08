// lca - Least Common Ancestor
//        10
//  20                       30
//                    40                50
//              60                 70        80
// (60,70) ->30
// (80,30) ->30
// (70,80) ->50

#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
#include<unordered_map>
#include<vector>
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

bool findPath(Node *root,vector<Node *>p,int n){
    if(root == NULL){
        return false;
    }
    p.push_back(root);
    if(root->key == n){ return true;}
    if(findPath(root->left,p,n) || findPath(root->right,p,n)){
        return true;
    }
    p.pop_back();
    return false;
}

Node *lca(Node*root, int n1,int n2){
    vector<Node*>path1,path2;
    if (findPath(root,path1,n1)==false || findPath(root,path2,n2)==false){
        return NULL;
    }
    for(int i=0;i<path1.size()-1 && i<path2.size();i++){
        if(path1[i+1] != path2[i+1]){
            return path1[i+1];
        }
    }
    return NULL;
}

// time -> theta(n)+theta(n)+O(n) ->O(n)