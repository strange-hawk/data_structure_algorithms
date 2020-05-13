#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


// naive O(n^3)
bool areDistinct(string s,int i,int j){
    vector<bool> visited(256);
    for(int i=0;i<=j;i++){
        if(visited[s[i]] == true){
            return false;
        }
        visited[s[i]]=true;
    }
}
int longestDistinct(string str){
    int n=str.length(),res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(areDistinct(str,i,j)){
                res = max(res,j-i+1);
            }
        }
    }
}

// O(n^2)
bool longestDistnict(string str){
    int res;
    for(int i=0;i<str.length();i++){
        vector<bool> vec(256);
        for(int j=i;j<str.length();j++){
            if(vec[str[j]]){
                break;
            }
            else{
                res = max(res,j-i+1);
                vec[str[j]]=true;
            }
        }
    }
    return res;
}

// O(n)
// maxEnd(j) : length of the longest substring that has distinct characters and ends with j
// return max(maxEnd)

//             ---
//             ||    maxEnd(j-1)+1       if str[j] is not present in maxEnd[j-1]
// maxEnd[j] = --    or
//             ||    j-prev(str[j])+1    where prev(str[i]) is the last index of occurence of str[j]
//             ---


// j stores the last repeated character index
int longestDistane(string str){
    int prev[256]={-1};
    int arr[26]={0};
    int j=0;
    for(int i=0;i<str.length();i++){
        j=max(j,prev[str[i]]+1);
        arr[i]=i-j+1;
        prev[str[i]]=j;
    }
}