RECURSIVE
int bin_coeff(int n, int k){
    if(k==0 || k==n){
        return 1;
    }
    return bin_coeff(n-1,k-1)+bin_coeff(n-1,k);
}

DYNAMIC PROGRAMMING
int bin_coeff(int n, int k){
    unsigned long long int arr[a+1][b+1];
        if(a<b){
            cout<<0<<"\n";
            continue;
        }
        for(int i=0;i<=min(a,b);i++){
            arr[0][i]=0;
        }
        for(int i=1;i<=a;i++){
            for(int j=0;j<=min(a,b);j++){
                // if(i==0){
                //     arr[i][j]==0;
                //     continue;
                // }
                if(j==0 || j== i){
                    arr[i][j]=1;
                }
                else{
                arr[i][j] = ((arr[i-1][j])+(arr[i-1][j-1]));
                }
            }
        // for(int i=0;i<=a;i++){
        //     for(int j=0;j<=b;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        }
        cout<<arr[a][b]<<endl;
    return arr[a][b];
}