// variations of LIS

// 1> minimum no. of elements to delete to make the whole array sorted
// 2> find the maximum sum increasing subsequence
// I/P : 1,5,8,2,3,4
// o/P : 14
 
 int LIS(int[] arr, int n){
     int lis[n];
     for(int i=0;i<n;i++){
         lis[i]=arr[i];
     }
     for(int i=1;i<n;i++){
         for(int j=0;j<i;j++){
             if(arr[j]<arr[i]){
                 lis[i] = max(lis[i],lis[j]+arr[i]);
             }
         }
     }
     return *max_element(lis,lis+n)
 }