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

Node *segregate(Node *head){
    Node *eS = NULL, *eE =NULL, *oS=NULL,*oE=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        int t = curr->key;
        if(t%2==0){
            if(eS == NULL){
                eS = curr;
                eE = eS;
            }
            else{
                eE->next = curr;
                eE = eE->next;
            }
        }
        else{
            if(oS==NULL){
                oS = curr;
                oE = oS;
            }
            else{
                oE->next = curr;
                oE =oE->next;
            }
        }
    }
    if(oS==NULL || eS==NULL){
        return;
    }
    eE->next = oS;
    oE->next = NULL;
    return eS;

}