/#include<iostream>
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

bool isloop(Node *head){
    Node *slow = head, *fast = head;
    while(slow!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast = fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}

// points to note

// fast_p will enter into the loop before or at the same time as the slow pointer
// let fast be k distance ahead of slow when slow enters the loop where k>=0
// the distnace keeps on increasing by one in every increment of both pointers
// when the distance becomes length of cycle, they meet when the diatnce equals the length of cycle

// time - O(m+n) n-> length of loop