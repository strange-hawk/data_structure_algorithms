#include<iostream>
using namespace std;
int max_diff(int arr[],int n){
    int diff=arr[1]-arr[0];
    int mini=arr[0];
    for(int i=1;i<n;i++){
        diff = max(diff,arr[i]-mini);
        mini = min(mini,arr[i];
        }
    }
    return diff;
}

int main(){

}