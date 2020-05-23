// advantages
//  -    can be traversed in both directions
//  -    delete a node in O(1) time                --> due to availablity of prev
//  -    can insert/remove a node in O(1) time     --> same as above

// disadvantages
//  -   space erquired for extra pointer
//  -    more complex 


// doubly sided queue are implemented using double linked list
// list in CPP or dequeue in PYTHON are double linked list

#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *prev;
    Node *next;
    Node(int key){
        key=key;
        prev=next = NULL;
    }
};