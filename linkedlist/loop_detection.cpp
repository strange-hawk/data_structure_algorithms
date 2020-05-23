#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
struct Node
{
    int key;
    Node *next;
    bool visited;
    Node(int key){
        this->key = key;
        this->next = NULL;
        this->visited = false;
    }
};
// method - 1   O(n^2)
// iterate through every node and then traverse right next from the next node till the end, comparing the addresses

// method - 2
// alter the structure of the structure
// while traversing the structure mark the visited as true
bool visited(Node *root){
    Node *temp = root;
    while(temp!=NULL){
        if(temp->visited = false){
            temp->visited = true;
        }
        else{
            return true;
        }
        temp=temp->next;
    }
    return false;
}

// method - 3
// create a dummy node that will contain all the next pointers of the current node
bool isloop(Node *head){
    Node *temp = new Node;
    Node *curr = head;
    while(curr!=NULL){
        if(curr->next == NULL){
            return false;
        }
        if(curr->next == temp){
            return true;
        }
        Node *curr_next = curr->next;
        curr->next = temp;
        curr= curr->next;
    }
    return false;
}

// method -4 hashing
// space  - O(n)
// time - O(n)
bool isloop(Node *head){
    unordered_set<Node *> s;
    for(Node *temp = head;temp!=NULL;temp=temp->next){
        if(s.find(temp)==s.end()){
            s.insert(temp);
        }
        else{
            return true;
        }
    }
    return false;
}