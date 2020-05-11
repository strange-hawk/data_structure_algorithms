void intersectpair(int a[],int b[],int m, int n){
    int i=0,j=0;
    while(i<m &&j<n){
        if(i<0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
            continue;
        }
        if(b[j]<a[i]){
            j++;
            continue;
        }
        cout<<a[i];
        i++;
        j++;
    }
}