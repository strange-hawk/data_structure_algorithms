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

// count using the length method
void print_n(Node *head,int n){
    int count=0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    if(count<n){
        return;
    }
    temp=head;
    for(int i=1;i<count-n+1;i++){
        temp=temp->next;
    }
    cout<<temp->key<<endl;

}

void print_n(Node *head, int n){
    if(head==NULL){
        return;
    }
    Node *first = head;
    for(int i=0;i<n;i++){
        if(first==NULL){
            return;
        }
        first = first->next;
    }
    Node *second = head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->key<<endl;
}