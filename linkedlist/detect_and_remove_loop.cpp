// detect loop using floyd's algorithm
// move slow pointer to the beginning of linked list and keep fst pointer at the meeting point
// now one by one move slow and fast at same speed. the moment they meet is the first node of the loop

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

void DeleteLoop(Node *head){
    bool loopPresent = false;
    Node *slow=head,*fast = head;
    while(slow!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            loopPresent = true;
            break;
        }
    }
    if(!loopPresent){
        return;
    }
    slow = head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
    return;
}