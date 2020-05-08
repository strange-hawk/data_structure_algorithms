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
int main()
{
    int t;
    Node *root = new Node(10);
    root -> left =new Node(5);
    root -> right = new Node(20);
    return 0;
}