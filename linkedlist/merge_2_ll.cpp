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

// pick the smaller of the two heads and marks both head/tail to it
// compare and add to the tail and update tail
// move the pointer of that list of which u opted to add to tail
Node *merge(Node *head1,Node *head2){
    if(head1 ==NULL){
        return head2;
    }
    if(head2==NULL){
        return head2;
    }
    Node *head,*tail,*a=head1,*b=head2;
    if(head1->key < head2->key){
        head = a;
        tail = a;
        a=a->next;
    }
    else{
        head=b;
        tail=b;
        b=b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->key < b->key){
            tail->next = a;
            tail=a;
            a=a->next;
            // tail=tail->next;
        }
        else{
            tail->next = b;
            tail=b;
            b=b->next;
            // tail=tail->next;
        }
    }
    if(a==NULL){
        tail->next=b;
    }
    if(b==NULL){
        tail->next=a;
    }
    return head;

}