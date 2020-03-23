// main logic : consider the problem as same as subset sumproblem but instead of filling the cell with bool fill it with value

int knapsack(int val[], int wt[], int n, int w){
    int K[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0){
                K[i][j]=0;
                continue;
            }
            if(wt[i-1]<w){
                K[i][j]=K[i-1][j];
            }
            else{
                K[i][j]=max(K[i][j],K[i-1][j-wt[i-1]]+val[i-1]);
            }
        }
    }
}