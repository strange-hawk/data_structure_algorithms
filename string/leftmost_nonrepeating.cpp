#include<iostream>
#include<string>
using namespace std;

int index(string s){
    int res = INT16_MAX;
    int arr[256]={-1};
    for(int i=0;i<s.length();i++){
        if(arr[s[i]]==-1){
            arr[s[i]]=i;
        }
        arr[s[i]]=-2;
    }
    for(int i=0;i<256;i++){
        if(arr[i]>=0){
            res = min(res,arr[i]);
        }
    }
    return res==INT16_MAX ? -1 : res;
}