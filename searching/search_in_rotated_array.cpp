#include<iostream>
using namespace std;
int search_pivot(int arr[],int low,int high){
    if(low>high){
        return -1;
    }
    int mid = (high+low)/2;
    if(mid<high && arr[mid]>arr[mid+1]){
        return mid+1;
    }
    if(mid>low && arr[mid]<arr[mid-1]){
        return mid;
    }
    if(arr[mid]>arr[low]){
        return search_pivot(arr,mid+1,high);
    }
    else{
        return search_pivot(arr,low,mid-1);
    }

}
int BinarySearch(int arr[],int search,int start, int end){
    if(start>end){
        return -1;
    }
    int mid = (start+end)/2;
    if(search==arr[mid])    
        return mid;
    else if(search>arr[mid])
        return BinarySearch(arr,search,mid+1,end);
    else
        return BinarySearch(arr,search,start,mid-1);
}

int main(){
    int arr[]={2,3,4,5,6,7,1};
    int size=7;
    int pivot = search_pivot(arr,0,size-1);
    int search=1;
    if(pivot==-1){
        cout<<BinarySearch(arr,search,0,size-1);
    }
    else{
        if(search>arr[0]){
            cout<<BinarySearch(arr,search,0,pivot-1)<<endl;
        }
        else{
            cout<<BinarySearch(arr,search,pivot,size-1)<<endl;
        }
    }
}