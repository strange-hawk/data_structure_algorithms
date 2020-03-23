// given a rod and three lengths a,b,c. Find the max no. of rod pieces that can be cut from the rod

// RECURSIVE APPROACH
#include<iostream>
#include<algorithm>
using namespace std;
// int maxR(int n,int a,int b,int c){
//     if(n<0){
//         return -1;
//     }
//     if(n==0){
//         return 0;
//     }
//     int res = 1+max(maxC(n-a,a,b,c),maxC(n-b,a,b,c),maxC(n-c,a,b,c));
//     if(res ==-1){
//         return res;
//     }
//     return res;
// }

// DP APPROACH
int maxC(int n,int a, int b, int c){
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=-1;
        if(i-a>=0){
        dp[i]=max(dp[i],dp[i-a]);}
        if(i-b>=0){
        dp[i]=max(dp[i],dp[i-b]);}
        if(i-c>=0){
        dp[i]=max(dp[i],dp[i-c]);}
        if(dp[i]!=-1){
            dp[i]+=1;
        }
    }
    return dp[n];
}

int main(){
    cout<<(maxC(25,11,12,14))<<endl;
}