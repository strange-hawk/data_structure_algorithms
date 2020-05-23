#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
struct Node
{
    int key;
    Node *next;
    // bool visited;
    Node(int key){
        this->key = key;
        this->next = NULL;
        // this->visited = false;
    }
};

void deleteNode(Node *ptr){
    Node *temp = ptr->next;
    ptr->key = temp->key;
    ptr->next = temp->next;
    delete(temp);
}
