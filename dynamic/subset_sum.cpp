// given an array and a sum determine if the sum can be formed by subset of the given array

// I/O : {3, 34, 4, 12, 5, 2}, 9
// O/P : true

// logic : form a boolean array dp[n+1][sum+1]
// dp[i][j] will be true iff j can be formed by any subset of arr[0...i]

// dynamic approach
#include<iostream>
using namespace std;
bool isfound(int arr[], int n, int sum){
    int subset[n+1][sum+1];
    for(int i=0;i<=n;i++){
        subset[i][0]=true;
    }
    for(int i=1;i<=sum;i++){
        subset[0][i]=false;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j< arr[i-1]){
                subset[i][j]=subset[i-1][j];
            }
            else{
                subset[i][j]=subset[i-1][j] || subset[i-1][j-arr[i-1]];
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=sum;j++){
    //         cout<<subset[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"debug\n";
    if(subset[n][sum]==true){
        while(sum!=0){
            for(int i=0;i<=n;i++){
                // cout<<"debug\n";
                if(subset[i][sum]==true){
                    // cout<<arr[i-1]<<" ";
                    // cout<<"debug\n";
                    sum=sum-arr[i-1];
                    n=n-(n-i+1);
                    cout<<arr[i-1]<<" ";
                    // cout<<n<<endl;
                    break;
                }
            }
        }
    }
    cout<<endl;
    return subset[n][sum];

}

int main(){
    int set[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(set)/sizeof(set[0]);
    cout<<isfound(set,n,45)<<endl;
}