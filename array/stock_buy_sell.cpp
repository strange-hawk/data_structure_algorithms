#include<algorithm>
#include<iostream>
using namespace std;

// naive
int max_profit(int arr[], int s, int e,int n){
    if(e<=s){
        return 0;
    }
    int profit =0 ;
    int max_p;
    for(int i=0;i<n;i++){
        for(int j=s+1;j<=n;j++){
            if(arr[j]>arr[i]){
                max_p = (arr[j]-arr[i]+max_profit(arr,s,i-1,n)+max_profit(arr,j+1,e,n));
                profit = max(profit,max_p);
            }
        }
    }

}

// 
int max_profit(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit += arr[i]-arr[i-1];
        }
    }
    return profit;
}