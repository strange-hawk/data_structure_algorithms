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

// naive solution

void printNode(Node *head){
    if(head==NULL){
        cout<<'empty'<<endl;
        return;
    }
    int count =0;
    Node *count_nodes = head ;
    while(count_nodes!=NULL){
        count++;
        count_nodes = count_nodes -> next;
    }
    Node * act_node = head;
    for(int i=0;i<count/2;i++){
        act_node = act_node->next;
    }
    cout<<act_node->key<<endl;
}

// optimised way
void printNode(Node *head){
    if(head==NULL){
        cout<<'empty'<<endl;
        return;
    }
    Node *cur = head;
    Node *cur_nextnext = head;
    while(cur_nextnext!=NULL && cur_nextnext->next != NULL){
        cur_nextnext=cur_nextnext->next->next;
        cur=cur->next;
    }
    cout<<cur->key<<endl;
}