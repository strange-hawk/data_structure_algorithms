#include<iostream>
#include<algorithm>
#include<vector>
int max_sum(int arr[],int n){
    int res=arr[0], maxEnding = arr[0];
    for(int i=1;i<n;i++){
        maxEnding = max(arr[i],maxEnding+arr[i]);
        res = max(res,maxEnding);
    }
    return res;
    vector<int> vec;
    vec.

}