// Problem : given an array find the minimum no. ofjumps required to reach the end of array. The maximum jump made at the ith index is given by arr[i]. 

for(int i=1;i<n;i++){
    min_jump_array[i]=INT_MAX;
    for(int j=0;j<i;j++){
        if(i<=j+min_jump_array[j] && min_jump_array[j]!= INT_MAX){
            min_jump_array[i]=min(min_jump_array[i],min_jump_array[j]+1)
        }
    }
}
// simple logic
// for any j<i arr[j] >= j-i(difference between the levels)