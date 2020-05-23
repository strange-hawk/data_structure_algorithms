#include<iostream>
#include<vector>
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

// complexity = O(n)
// space = O(n/k)
Node * revink(Node *head,int k){
    Node *prev = NULL,*curr=head,*next;
    int count=0;
    while(count<k && curr!=NULL){
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next = revink(next,k);
    }
    return prev;
}

// iterative

Node * revink(Node *head, int k){
    Node *curr = head, *prevFirst= NULL;
    bool  isFirstPass = true;
    while(curr != NULL){
        Node *first = curr, *prev = NULL;
        int count=0;
        while(count<k && curr!=NULL){
            Node *next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(isFirstPass){
            isFirstPass=false;
            head = prev;
        }
        else{
            prevFirst->next = prev;
        } 
        prevFirst = first;
    }
    return head;
}