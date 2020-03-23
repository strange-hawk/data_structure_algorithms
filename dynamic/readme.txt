optimisation overe plain recursion when there are overlapping subprobplems
two ways to implement --->
--- memoization -> create a memo table and initialise it with null.
                    pseudocode for nth fibonacci no. using memoization

                    int memo[n+1]={-1,-1,-1,-1,......-1}
                    int fib(int n){
                        if(n==0 || n==1){
                            memo[n] = n           
                        }
                        if(memo[n]!=-1){
                            return memo[n];
                        }
                        else{
                            memo[n] = fib[n-1]+fib[n-2]
                            return memo[n] 
                        }
                        
                    }
--- tabulation 
                    pseudocode for nth fibonacci no.

                    int fib(int n){
                        int f[n+1];
                        f[0]=0;
                        f[1]=0;
                        for(int i=2;i<=n;i++){
                            f[i]=f[i-1]+f[i-2]

                        }
                        return f[n]
                    }