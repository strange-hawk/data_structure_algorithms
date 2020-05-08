// left view means at every level u need to print only the leftmost node
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
int max_level=0;
void left_tree(Node *root, int level){
    if (root == NULL){
        return ;
    }
    if(max_level<level){
        cout<<root->key;
        max_level = level;
    }
    left_tree(root->left,level+1);
    left_tree(root->right,level+1);
}

void right_tree(Node *root, int level){
    if (root == NULL){
        return ;
    }
    if(max_level<level){
        cout<<root->key;
        max_level = level;
    }
    right_tree(root->right,level+1);
    right_tree(root->left,level+1);
}

// iterative approach -> based on the fact that at a particcular instant queue contains all the nodes at a particular level
void printleft(Node *root){
    if(root == NULL){
        return ;
    }
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
        for(int i=0;i<count;i++){
            Node *temp = q.front();
            q.pop();
            if(i==0){
                cout<<temp->key;
            }
            if(temp->left != NULL){
                q.push(temp->left);
                i++;
            }
            if(temp->right != NULL){
                q.push(temp->right);
                i++;
            }
        }
    }

}
// time -> O(n)
// space -> O(n)

int main(){
    Node *root = new Node(10);
    left_tree(root,1);
}


// time complexity -> O(n)
// space -> O(h)

