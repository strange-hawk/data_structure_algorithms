idea : the XOR is maximum if all the bits are set at different locations
so we iterate from i= 31 bit to 0th bit
    then we find that max element having the ith bit set and replace it with 0th index
    if there are more elements having ith bit set then we simply toggle it off, by XORing it with 1<<j

then we take XOR of all elements and return the output


int maxSubarrayXOR(int A[], int n)
{
     int index=0;
    for(int i=31;i>=0;i--){
        int maxIndex=index;
        int maxElement=INT_MIN;
        for(int j=index;j<n;j++){
            if(((A[j] & (1<<i))!=0 ) && (A[j]>maxElement)){
                maxIndex=j;
                maxElement = A[j];
            }
        }
        if(maxElement == INT_MIN){
            // index++;
            continue;
        }
        swap(A[maxIndex],A[index]);
        for(int j=0;j<n;j++){
            if((j!=index) && ((A[j] & (1<<i))!=0 )){
                A[j]=A[j]^A[index];
            }
        }
        index++;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=res^A[i];
    }
    // cout<<endl;
    return res;
    //Your code here
}
