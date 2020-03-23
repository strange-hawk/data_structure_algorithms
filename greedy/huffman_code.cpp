#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct MinHeapNode{
    char data;
    unsigned int freq;
    MinHeapNode *left, *right;
    MinHeapNode(char ch, unsigned int t){
        this->data = ch;
        this->freq = t;
        left = right = NULL;
    }

};
struct compare { 
  
    bool operator()(MinHeapNode* l, MinHeapNode* r) 
  
    { 
        return (l->freq > r->freq); 
    } 
};

void printcode(MinHeapNode *root , string s){
    if (!root) 
        {
        return;}
    if(root->data != '$'){
        cout<<root->data<<" : "<<s<<"\n";}
    printcode(root->left,s+"0");
    printcode(root->right,s+"1");
    
}

void HuffmanCode(char arr[],unsigned int freq[], int n ){
    struct MinHeapNode *top, *left, *right;
    priority_queue<MinHeapNode*,vector<MinHeapNode*>,compare > minheap;
    for(int i=0;i<n;i++){
        minheap.push(new MinHeapNode(arr[i],freq[i]));
    }
    while(minheap.size()!=1){
        left = minheap.top();
        minheap.pop();
        right = minheap.top();
        minheap.pop();
        top = new MinHeapNode('$',left->freq + right->freq);
        // top->data = 
        // top->ch = '$';
        top->left = left;
        top->right = right;
        minheap.push(top);
    }
    printcode(minheap.top(),"");
}

int main(){
    char str[]={'a','b','c','d','e','f'};
    unsigned int arr[]={1200, 900, 320, 7320, 264, 405};
    HuffmanCode(str,arr,6);
}

