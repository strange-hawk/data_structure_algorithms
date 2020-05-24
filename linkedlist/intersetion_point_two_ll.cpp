#include<iostream>
#include<unordered_set>
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

// method 1
// hash set
// using unordered_set

// method 2
// count number of nodes in both the lists,let c1 and c2
// traverse the bigger list abs(c1-c2) times
// traverse both the lists simultaneously until we get a common node
Node * intersect(Node*curr1,Node *curr2){
    // 
    // 
while(curr1 !=NULL && curr2!=NULL){
    if(curr1 == curr2)
        return curr1;
    curr1 = curr1->next;
    curr2 = curr2->next;
}
return NULL;
}