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

// swap data
void paiwiseSwap(Node *head){
    Node *curr = head;
    while(curr!=NULL && curr->next != NULL){
        swap(curr->key,curr->next->key);
        curr=curr->next->next;
    }

}

// swap links

Node *pairwiseSwap(Node *head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;
    while(curr!=NULL && curr->next != NULL){
        prev->next = curr->next;
        prev = curr;
        Node *nxtptr = curr->next->next;
        curr->next->next=curr;
        curr = nxtptr;
    }
    prev->next = curr;
    return head;

}