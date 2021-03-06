#include<iostream>
using namespace std;
int sum(int arr[],int n,int x)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j] > x)
        {
            j--;
        }
        else if(arr[i]+arr[j]<x)
        {
            i++;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

// for unsorted we can use hashing
// storing the element in a (hash table / unordered set) and then search for the existence of (sum-arr[i])


int main()
{
    int arr[]={2,4,8,9,11,12,20,30};
    cout<<sum(arr,8,40)<<endl;
}