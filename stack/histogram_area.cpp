#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int getMaxArea(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr=arr[i];
        for(int j=i-1;j>=0;j++){
            if(arr[j]>=arr[i]){
                curr+=arr[i];
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                curr+=arr[i];
            }
            else{
                break;
            }
        }
        res= max(res,curr);
    }
    return res;
}


// better solution
// initialise res=0
// find previous smaller element for every element
// find next smaller eleemnt for eveery eleemnt
// do following
//      curr= arr[i]
//      curr += (i-ps[i]-1)*arr[i]
//      curr += [ns[i]-i-1]*arr[i]
//      res = max(res,curr)
// return res;

int getMaxArea(int arr[], int n){
    int ps[n];
    ps[0]=-1;
    stack<int> s;
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[i] < arr[s.top()])
            s.pop();
        ps[i] = s.empty()==true ? -1 : i-s.top();
        s.push(i);
    }
    int ns[n];
    ns[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        while(!s.empty() && arr[i]<arr[s.top()]){
            s.pop();
        }
        ns[i] = s.empty() == true ? n : s.top()-i;
        s.push(i);
    }
}
// for previous smaller if the current is greater than the top then, simply push it
// idea is to create a stack that maintains the previous smaller stack
// the top indicates the previous smaller element
// create a stack
// int res =0 
int getMaxArea(int arr[], int n){
    int res=0;
    stack<int> s;
for(int i=0;i<n;i++){
    {
        while(s.empty() == false && arr[s.top()]>=arr[i]){
            int tp = s.top();s.pop();
            int curr = arr[tp] * (s.empty() == true ? i : i - s.top()-1);
            res = max(res,curr);
        }
        s.push(i);
    }
}
// consider {1,2,3,4,5,6,7} and {7,6,5,4,3,2,1} for clarification
// if some elements are remaining in the stack then we use next smaller element trick
// after popping element, if stack is not empty then that simply means there is a smaller eleemnt then that thus its area can not be simply arr[i] * n, it has to be smaller than that, and that value will be given by i-s.top-1
while(s.empty()==false){
    int tp = s.top();s.pop();
    int curr = arr[tp]*(s.empty()==true ? n : (n-s.top()-1));
    res = max(res,curr);
}
return res;
}