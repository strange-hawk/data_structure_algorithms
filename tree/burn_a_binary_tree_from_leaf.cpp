// at each unit of tine neighbours will be removed
// the time to delete the node itself is considered at 0


// idea -> we have to find the distance between the farthest node from the given node


#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left= right = NULL;
    }
};
