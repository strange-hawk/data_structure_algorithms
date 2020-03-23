#include<iostream>
using namespace std;
int func(int arr[],int n,int k)
{
    int sum=0;
    for (int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    int sum2=sum;
    int j=k;
    while(j<n)
    {
        sum2=sum2+arr[j]-arr[j-k];
        if (sum2>sum)
        {
            sum=sum2;
        }
        j++
    }
    return sum;
}
int main()
{
    int arr[]={1,2,3,1,4,5};
    int k=3;
    int n=6;
    cout<<func(arr,n,k);
}