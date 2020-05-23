#include<iostream>
using namespace std;
struct Node
{
    int key;
    Node *next;
    Node(int key){
        this->key = key;
        this->next = NULL;
    }
};
Node *insert(Node *root, int key){
    Node *curr = root;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=new Node(key);
    return root;
}
Node *insertBegin(Node *root, int key){
    Node *temp = new Node(key);
    temp->next = root;
    return temp;
}

void print(Node *root){
    while(root->next != NULL){
        cout<<root->key<<"  ";
        root=root->next;
    }
}
int main(){
    Node *root = new Node(10);
    root = insert(root,15);
    root = insert(root,20);
    root = insert(root,25);
    root = insert(root,30);
    root = insertBegin(root,50);
    print(root);
    cout<<endl;
}
