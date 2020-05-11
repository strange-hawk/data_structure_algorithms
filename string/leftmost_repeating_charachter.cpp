#include<iostream>
#include<string>
using namespace std;
int index(string s){
    int arr[256]={-1};
    int res = INT32_MAX;
    for(int i=0;i<s.length();i++){
        if(s[i]==-1){
            arr[s[i]]=i;
        }
        res = min(res,arr[s[i]]);
    }
    return (res==INT32_MAX) ? -1 : res;
}