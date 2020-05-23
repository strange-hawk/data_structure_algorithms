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
Node *revlist(Node *head){
    vector<int> arr;
    for(Node *curr=head;curr->next!=NULL;curr=curr->next){
        arr.push_back(curr->key);
    }
    for(Node *curr=head;curr->next!=NULL;curr=curr->next){
        curr->key = arr.back();
        arr.pop_back();
    }
}
// requires axilliary space 

// optimised way
// store next of curr so we may not loose the nodes ahead of curr
// make next of curr to prev
// make prev to curr
// curr = next

Node *revList(Node *head){
    Node *prev=NULL,*nxt,*curr=head;
    while(curr!=NULL){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr=nxt;
    }
    return prev;
}


// recursive approach
// reverse the later n-1 nodes then the 1st one
// accessing head->next->next so head->next should be checked explicitly
Node * revrecL(Node *head){
    if(head == NULL){
        return NULL;
    }
    if(head->next ==NULL){
        return head;
    }
    Node *new_head = revrecL(head->next);
    Node *new_tail = head->next;
    new_tail->next = head;
    head->next = NULL;
    return new_head;
}


// recursive approach
// reverse the first n-1 nondes and then the last nth node, similar to iterative
Node *revrec(Node *curr,Node *prev){
    if(curr == NULL){
        return prev;
    }
    Node *nextNode = curr->next;
    curr->next= prev;
    prev = curr;
    return revrec(nextNode,curr);
}
// while calling for the first time
// revrec(head,NULL)