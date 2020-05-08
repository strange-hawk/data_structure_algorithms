// maintain a queue
// enqueue the root
// while dequeing, ensure to enqueue its next children

// 3 states
// it never went to the queue (undiscovered)
// it is there in the queue (discovered)
// it went into the queue and comes out of the queue

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

void print_level(Node *root){
    if(root!= NULL){
        queue<Node *> q;
        q.push(root);
        while(q.empty() == false){
            Node * temp = q.front;
            q.pop();
            cout<<temp->key;
            if(temp->left !=NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

// time complexity = O(n) or theta(n)
// space complexity = O(n) = queue size is atmost one level = width of tree -> max = n/2 which is at the lowermost level