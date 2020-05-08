#include<iostream>
#include<algorithm>

int max_circ_sum(int arr[],int n){
    // int res = INT32_MIN;
    int res = arr[0];
    for(int i=0;i<n;i++){
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j=1;j<n;j++){
            int index = (i+j)%n;
            curr_sum += arr[index];
            curr_max= max(curr_sum,curr_max);
        }
        res = max(res,curr_max);
    }
}

// O(n)
// 1. max sum of normal subarray
// 2. max sum of circular subarray
// return max(both)
int main(){

}