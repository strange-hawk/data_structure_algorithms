problem statement -: minimum number of operations required to convert str1 to str2
I/P :- geeks, geek
O/P :- 1

I/P : saturday, sunday
O/P : 3

I/P : cat,cut
O/P : 1

// recursive solution
int ed(string s1,string s2,int m,int n){
    if(m==0){
        return n;// for addition
    }
    if(n==0){
        return m;// for deletion
    }
    if(s1[m-1]==s2[n-1]){
        return ed(s1,s2,m-1,n-1);
    }
    return 1+min(ed(s1,s2,m,n-1),
    //  for insertion geek,geeks
        ed(s1,s2,m-1,n),
        //  for deletion geeks,geek
        ed(s1,s2,m-1,n-1)
        //  for replacement geeks,geeke
    ) 
}

// using dp

int ed(string s1, string s2, int m, int n){
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for (int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0){
                dp[i][j]=j;
            }f
            if(j==0){
                dp[i][j]=i;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else {
                dp[i][j]= 1+max(dp[i-1][j-1],dp[i][j-1],dp[i-1][j]);
            }
            return dp[m][n];

        }
    }
}