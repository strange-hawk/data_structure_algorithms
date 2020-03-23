// I/O X="AABCDY"
//     Y="AYCYDY"

// O/P 4 (A,C,D,Y)

// LCS(X,Y,m,n)={1+LCS(X,Y,m-1,n-1),
//                                 if(X[m-1]==Y[n-1])
//               max(LCS(X,Y,m,n-1),LCS(X,Y,m-1,n-1))
//              }

#include<iostream>
#include<algorithm>
using namespace std;
// recursive solution
int LCS(string X,string Y,int m, int n){
    if(m==0 || n==0){
        return 0;
    }
    if(X[m-1]==Y[n-1])
        return 1+LCS(X,Y,m-1,n-1);
    return max(LCS(X,Y,m,n-1),LCS(X,Y,m-1,n));
}
//  tabular soltution
int LCS(string X,string Y,int m, int n){
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if (X[i]==Y[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j])
        }
    }
    return dp[m][n];
}
int main(){

}
