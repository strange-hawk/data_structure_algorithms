int bin_coeff(int n, int k){
    int arr[k+1];
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=min(i,k);j>=1;j--){
            arr[j]+=arr[j-1];
        }
    }
}