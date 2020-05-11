void pairunion(int a[],int b[],int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && a[j]==a[j-1]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
            continue;
        }
        if(b[j]<a[i]){
            cout<<b[j];
            j++;
            continue;
        }
    }
    while(i<m){
        if(i==0 || a[i]!=a[i-1])
            cout<<a[i];
        i++;
    }
    while(j<n){
        if(j==0 || b[j]!=b[j-1])
            cout<<b[j];
        j++;
    }
}